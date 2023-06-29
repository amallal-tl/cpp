#include <iostream>

using namespace std;

class Base{
	public:	
	Base(){cout << "Base const" << endl;}
	virtual ~Base(){cout << "Base dest" << endl;}	
};

class Derived : public Base{
	public:
	Derived(){cout << "Derived const" << endl;}
	~Derived(){cout << "Derived dest" << endl;}
};

int main(){
	Derived* d = new Derived();
	Base* b = d;
	delete b;
	//Derived* d;
}