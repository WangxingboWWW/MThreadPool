#include <iostream>
#include <vector>
#include <chrono>

#include <ctime>
#include <cstdlib>

//#include "ThreadPool.h"
#include "MThreadPool/ThreadPool.hpp"
#include "MThreadPool/DoWork.hpp"

int main()
{
    
    /*ThreadPool pool(4);
    std::vector< std::future<int> > results;

    std::chrono::time_point<std::chrono::system_clock> start = std::chrono::system_clock::now();

    for(int i = 0; i < 8; ++i) {
        results.emplace_back(
            pool.enqueue([i] {
                std::cout << "hello \n"; //<< i << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(1));
                std::cout << "world \n"; //<< i << std::endl;
                return i*i;
            })
        );
    }

    std::chrono::time_point<std::chrono::system_clock> end = std::chrono::system_clock::now();
    std::chrono::duration<double, std::milli> elapsed_milliseconds = end - start;
    std::cout << " cost time is " << elapsed_milliseconds.count() << std::endl;
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << " cost time is " << elapsed_seconds.count() << std::endl;

    //for(auto && result: results)
        //std::cout << result.get() << ' ';
    std::cout << std::endl;*/


    DoWork doWork;
    MThreadPool threadPool(4);

    for (int i = 0; i < 20; ++i){
        threadPool.enqueue( &DoWork::linearWork, &doWork, i);
    }

    threadPool.waitForEmptyQueue();

    return 0;
}
