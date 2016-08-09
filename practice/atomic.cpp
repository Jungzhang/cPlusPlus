//
// Created by zhanggen on 16-8-5.
// 原子变量练习
//

#include <atomic>
#include <iostream>
#include <thread>
#include <vector>

class AtomicCounter {
    std::atomic<int> value;

public:
    void increment()
    {
        ++value;
    }

    void delement()
    {
        --value;
    }

    int get()
    {
        return value.load();
    }
};

//线程函数不能直接传入引用(如果传入引用需要用std::ref进行包装),但是可以传入指针
void func(AtomicCounter &atomicCounter, int i)
{
    if (i % 2) {
        atomicCounter.increment();
    } else{
        atomicCounter.delement();
    }
}

//int main(int argc, char *argv[])
//{
//    AtomicCounter atomicCounter;
//    std::vector<std::thread> threads;
//
//    for (int i = 0; i < 5; ++i) {
//        std::thread thread(func,  std::ref(atomicCounter), i);
//        threads.push_back(std::move(thread));
//    }
//
//    for (auto &a : threads) {
//        a.join();
//    }
//
//    std::cout << atomicCounter.get() << std::endl;
//
//    return 0;
//}
