ThreadPool
==========

## README
adapted from https://github.com/progschj/ThreadPool
How to use:
Change class member function DoWork::linearWork() according to requirements

## original README
A simple C++11 Thread Pool implementation.

Basic usage:
```c++
// create thread pool with 4 worker threads
ThreadPool pool(4);

// enqueue and store future
auto result = pool.enqueue([](int answer) { return answer; }, 42);

// get result from future
std::cout << result.get() << std::endl;

```
