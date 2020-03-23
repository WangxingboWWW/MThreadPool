//
// Created by wayne on 30/08/19.
//

#include "DoWork.hpp"

DoWork::DoWork() {

}

DoWork::~DoWork() {

}

void DoWork::linearWork(int i ) {
    std::cout << "hello " << i << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "world " << i << std::endl;
}