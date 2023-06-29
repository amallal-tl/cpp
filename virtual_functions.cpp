#include <iostream>

using namespace std;

class Parent{
	public:
	virtual void getName(){
		cout << "Parent" << endl;
	}
};

class Child : public Parent{
	string name;
	
	public:
	Child(string name):name(name){}
	
	void getName(){
		cout << "Child " << name << endl;
	}
};

int main(){
	Parent* p1 = new Parent();
	Child* c = new Child("Amal");
	Parent* p2 = new Child("Amal");
	p1->getName();
	c->getName();
	p2->getName();
	
	Parent p3;
	Child c2("Amal");
	p3 = c2;
	p3.getName();
	
	//Parent
	//Child Amal
	//Child Amal
	//Parent
}