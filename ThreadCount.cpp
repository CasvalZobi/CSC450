#include <iostream>
#include <thread>
#include <atomic>

std::atomic<bool> threadOneCompleted(false);

void countUp()
{
    for (int i = 1; i <= 20; ++i)
    {
        std::cout << "Thread 1: " << i << std::endl;
    }
    threadOneCompleted = true;
}

void countDown()
{
    while (!threadOneCompleted)
    {
        // Wait for thread 1 to complete its counting
    }

    for (int i = 20; i >= 0; --i)
    {
        std::cout << "Thread 2: " << i << std::endl;
    }
}

int main()
{
    std::thread t1(countUp);
    std::thread t2(countDown);

    t1.join();
    t2.join();

    return 0;
}
