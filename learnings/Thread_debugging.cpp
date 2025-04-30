#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

std::mutex coutMutex;  // To avoid mixed output

void workerThread(int id) {
    for (int i = 1; i <= 5; ++i) {
        {
            std::lock_guard<std::mutex> lock(coutMutex);
            std::cout << "Thread " << id << " - step " << i << "\n";
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Simulate work
    }

    {
        std::lock_guard<std::mutex> lock(coutMutex);
        std::cout << "Thread " << id << " completed\n";
    }
}

int main() {
    std::thread t1(workerThread, 1);
    std::thread t2(workerThread, 2);
    std::thread t3(workerThread, 3);

    //std::cout << "Main thread launched worker threads.\n";

    t1.join();
    t2.join();
    t3.join();

    std::cout << "Main thread: All threads completed.\n";
    return 0;
}
