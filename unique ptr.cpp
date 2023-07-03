#include <iostream>
#include <memory>

using namespace std;

class P{
	static int count;
	public:
	P(string message){cout << count << endl;}
	~P(){cout << "Dest" << endl;}
	void print(){
		cout << "Printer loaded...." << count << endl;
	}
};


int main(){
	unique_ptr<P> p1(new P("Priner"));
	p1->print();
	unique_ptr<P> p2;
	p2 = move(p1);
	
	p1->print();
	p2->print();
}