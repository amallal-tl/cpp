#include <iostream>

using namespace std;

class DeepCopy{
	public:
	
	int a;
	int* b;
	
	DeepCopy(int a1, int b1){
		b = new int;
		a = a1;
		*b = b1;
	}
	
	void print(string obj){
		cout << obj <<" = A : " << a << ", B : " << *b << endl;
	}
	
	DeepCopy(const DeepCopy& obj){
		a = obj.a;
		b = new int;
		*b = *obj.b;
	}
	
	~DeepCopy(){
		delete b;
	}
};

int main(){
	DeepCopy d1(10, 20);
	d1.print("D1");
	DeepCopy d2(d1);
	d2.print("D2");
	*d1.b = 30;
	d1.print("D1");
	d2.print("D2");	
}