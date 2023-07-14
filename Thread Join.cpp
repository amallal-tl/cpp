#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

void function1(){
    sleep(5);
}

void function2(){
    sleep(5);
}

int main(){
	thread t1(function1);//Thread t1 created and execution initiated
	thread t2(function2);//Thread t2 created and execution initiated
	
	//within 5 seconds both t1 and t2 will complete execution. Total time for both thread execution is 5 seconds
	t1.join();//after t1 is joined, the system waits for 5 seconds sleep to complete and after completion it moves to next line.
	cout << "Function1" << endl;
	t2.join();//Since t2 is already executed along with t1, there is no wait and instanlty moves to next line.
	cout << "Function2" << endl;
	
	cout << "All execution completed" << endl;
}
