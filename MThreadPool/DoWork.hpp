//
// Created by wayne on 30/08/19.
//
#include <iostream>

#include <chrono>

#include <ctime>
#include <cstdlib>
#include <thread>

#ifndef THREADPOOL_DOWORK_HPP
#define THREADPOOL_DOWORK_HPP


class DoWork {
public:
    DoWork();
    ~DoWork();

    void linearWork(int i);

// TODO

};


#endif //THREADPOOL_DOWORK_HPP
