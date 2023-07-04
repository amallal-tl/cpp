#include <iostream>
#include <memory>

using namespace std;

class P{
	public:
	static int counts;
	static int v;
	
	P(){cout << "Const" << endl;}
	~P(){cout << "Dest" << endl;}
	void print(){
		cout << "Printer loaded...." << counts << endl;
		counts+=v;
	}
};

int P::counts = 1;
int P::v = 1;

int main(){
	unique_ptr<P> p1(new P());
	p1->print();
	unique_ptr<P> p2;
	p2 = move(p1);
	
	if(p1)
		p1->print();
	
	p2->print();
}