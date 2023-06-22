//g++ -g debugging.cpp
//gdb a.exe
//https://www.youtube.com/watch?v=J7L2x1ATOgk

#include <iostream>

using namespace std;

void fun3() {
	int fun3Variable = 25;
	cout<< fun3Variable << endl;
}
void fun2() {
	int fun2Variable = 20;
	cout<< fun2Variable << endl;
	fun3();
}
void fun1() {
	int fun1Variable = 15;
	cout<< fun1Variable << endl;
	fun2();
}

int main() {
	int mainVariable = 10;
	cout << mainVariable << endl;
	fun1();
	return 0;
}