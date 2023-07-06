// C++ program to show inheritance ambiguity
//https://www.geeksforgeeks.org/inheritance-ambiguity-in-cpp/
#include<iostream>
using namespace std;

// Base class A
class A {
	public:
	void func() {
		cout << " I am in class A" << endl;
	}
};

// Base class B
class B {
	public:
	void func() {
		cout << " I am in class B" << endl;
	}
};

// Derived class C
class C: virtual public A, public B {
	public:
	void func() {
		cout << " I am in class C" << endl;
	}
};

int main() {
	// Created an object of class C
	C obj;
	// Calling function func()	
	obj.func();
	//obj.A::func();
	return 0;
}
