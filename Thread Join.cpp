#include <iostream>
#include <thread>

using namespace std;

void function1(){
	cout << "Function1" << endl;
}

void function2(){
	cout << "Function2" << endl;
}

int main(){
	thread t1(function1);
	thread t2(function2);
	
	t1.join();
	t2.join();
	
	cout << "All execution completed" << endl;
}
