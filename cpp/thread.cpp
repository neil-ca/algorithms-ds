#include <iostream>
#include <ostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <future>
//void threadFunction1();
//int main()
//{
    //std::thread t1 {threadFunction1};
    //t1.join();
    //return 0;
//}
//void threadFunction1() {
    //std::cout << "starting thread 1 ... " << std::endl;
    //std::cout << "end thread 1 ...";
//}

void threadFunction (std::vector<int> &speeds, int& res);
int asyncFunction();

int main()
{
    std::vector<int> speeds = { 1,2,3,4,5 };
    int result = 0;
    std::thread t1 ( threadFunction, std::ref(speeds), std::ref(result));
    t1.join();
    std::cout << "Result: " << result << std::endl;


    // using async
    std::future<int> fut = std::async(asyncFunction);
    std::cout << "max = " << fut.get() << std::endl;
    return 0;
}

void threadFunction (std::vector<int> &speeds, int& res) 
{
    std::cout << "starting thread 1 ..." << std::endl;
    for_each(begin(speeds), end(speeds), [](int speed) {
        std::cout << "speed is " << speed << std::endl;
    });
    res = 10;
    std::cout << "end thread 1 ... " << std::endl;
}

int asyncFunction() {
    std::cout << "starting asyncFunction ..." << std::endl;
    int max = 0;
    for (int i = 0; i < 100000; i++) {
        max += i;
    }
    std::cout << "Finished asyncFunction ..." << std::endl;
    return max;
}
