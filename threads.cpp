#include <iostream>
#include <thread>
using namespace std;
void fun1(int number){
    for(;number>0; number--){
        cout << "Printing " << number << endl;
    }
}

int main() {
    thread t1(fun1, 10);
    t1.join();
    return 0;
}