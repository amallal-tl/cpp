#include <iostream>

using namespace std;

class Person{
	private:
	int real, image;
	
	public:
	Person(int r = 0, int i = 0){
		real = r;
		image = i;
	}
	
	Person operator+(Person const&obj){
		Person per;
		per.real = real + obj.real;
		per.image = image + obj.image;
		return per;
	}
	
	Person operator*(Person const&obj){
		Person p;
		p.real = real * obj.real;
		p.image = image * obj.image;
		return p;
	}
	
	void print(){
		cout << real << "+ i" << image << endl;
	}
	
};

int main(){
	Person p1 (3, 7);
	Person p2 (1, 2);
	Person p3 = p1 + p2;
	p3.print();
	Person p4 = p1*p2;
	p4.print();
}