#pragma once
#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>

//异步写日志的日志队列
template<class T>
class LockQueue{
public:
    void Push(const T& data);
    T Pop();

private:
    std::queue<T> m_queue;
    std::mutex m_mutex;
    std::condition_variable m_condvariable;
};


template<class T>
void LockQueue<T>::Push(const T& data){
    //首先要想向队列里面插入元素，需要获得锁
    //这里使用的是类似智能指针，lock_guard lock() 获得锁后，会在生命周期结束，自动释放掉
    std::lock_guard<std::mutex> lock(m_mutex);
    m_queue.push(data);

    //这里是条件变量，放进去之后，通知所有的等待该条件变量的线程，条件出现了
    m_condvariable.notify_all();
}

template<class T>
T LockQueue<T>::Pop(){
    //首先获得锁
    std::unique_lock<std::mutex> lock(m_mutex);
    //如果是空，需要释放掉锁，然后等待被条件变量唤醒
    while(m_queue.empty()){
        //条件变量会释放掉锁并等待
        m_condvariable.wait(lock);
    }

    T data = m_queue.front();
    m_queue.pop();
    return data;
}