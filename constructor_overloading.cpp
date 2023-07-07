#include <iostream>
#include <string.h>

using namespace std;

class ConstOverload{
	int age = 10;
	char name[50];
	
	public:
	ConstOverload(int a, char  n[]){
			age = a;
			strcpy(name,n);
	}
	
	ConstOverload (const ConstOverload &obj){
		age = obj.age;
		strcpy(name, obj.name);
	}
	
	void print(){
		cout << name << " " << age <<  endl;
	}
};

int main(){
	ConstOverload c1(29, "amal");
	c1.print();
	ConstOverload c2(c1);
	c2.print();
}