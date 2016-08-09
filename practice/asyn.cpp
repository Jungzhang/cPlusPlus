//
// Created by zhanggen on 16-8-5.
// C++11提供的异步操作练习
//

#include <iostream>       // std::cout
#include <functional>     // std::ref
#include <thread>         // std::thread
#include <future>         // std::promise, std::future
#include <zconf.h>

//传进来future对象,获取值，等到获取结束后才打印
void print_int(std::future<int>& fut) {
    int x = fut.get(); // 获取共享状态的值.
    std::cout << "value: " << x << '\n'; // 打印 value: 10.
}

//传进来两个数字，遍历打印后返回两个的差值，通过package_task获得返回值
int test_package_task(int from, int to)
{
    for (int i = from; i >= to; --i) {
        std::cout << i << std::endl;
        sleep(1);
    }

    sleep(3);
    return from - to;
}

//std::promise测试
//int main ()
//{
//    std::promise<int> prom; // 生成一个 std::promise<int> 对象.
//    std::future<int> fut = prom.get_future(); // 和 future 关联.
//    std::thread t(print_int, std::ref(fut)); // 将 future 交给另外一个线程t.
//    sleep(3);
//    prom.set_value(10); // 设置共享状态的值, 此处和线程t保持同步.
//    t.join();
//    return 0;
//}

//std::package_task测试
//int main(int argc, char *argv[])
//{
//    std::packaged_task<int (int, int)> task(test_package_task);
//    std::thread thread(std::ref(task), 10, 1);
//
//    auto f = task.get_future();
//    std::cout << f.get() << std::endl;   //会阻塞
//    std::cout << "你好" << std::endl;
//    thread.join();
//
//    return EXIT_SUCCESS;
//}
