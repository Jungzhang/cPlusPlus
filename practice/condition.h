//
// Created by zhanggen on 16-8-5.
//

#ifndef TSHH_CONDITION_H
#define TSHH_CONDITION_H

#include <mutex>
#include <condition_variable>
#include <list>
#include <iostream>

template <typename T>

class SynQueue {
public:
    SynQueue(int maxSize) : m_maxSize(maxSize) {}
    void Put(const T& x) {
        std::lock_guard<std::mutex> locker(m_mutex);
        while (IsFull()) {
            std::cout << "缓存区已满" << std::endl;
            m_notFull.wait(m_mutex);
        }
        m_queue.push_back(x);
        m_notEmpty.notify_one();
    }
    void Take(T& x) {
        std::lock_guard<std::mutex> locker(m_mutex);
        while (IsEmpty()) {
            std::cout << "缓存区空" << std::endl;
            m_notEmpty.notify_one();
        }
        x = m_queue.front();
        m_queue.pop_front();
        m_notFull.notify_one();
    }
    size_t Size() {
        std::lock_guard<std::mutex> locker(m_mutex);
        return m_queue.size();
    }
    int Count() {
        return m_queue.size();
    }
    bool Full() {
        std::lock_guard<std::mutex> locker(m_mutex);
        return m_queue.size() == m_maxSize;
    }
    bool Empty() {
        std::lock_guard<std::mutex> locker(m_mutex);
        return m_queue.empty();
    }

private:
    bool IsFull() const {
        return m_queue.size() == m_maxSize;
    }
    bool IsEmpty() const {
        return m_queue.empty();
    }

private:
    std::list<T> m_queue;                       //缓存区
    std::mutex m_mutex;                         //条件变量要配合互斥量一起使用
    std::condition_variable_any m_notEmpty;     //不为空的条件变量
    std::condition_variable_any m_notFull;      //不为满的条件变量
    int m_maxSize;                              //队列最大长度
};

#endif //TSHH_CONDITION_H
