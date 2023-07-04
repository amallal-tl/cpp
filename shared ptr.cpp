#include <iostream>
#include <memory>

using namespace std;

class P{
	int static counter;
	public:
		void print(){
			cout << counter << endl;
			counter += 1;
		}
};

int P::counter = 1;

int main(){
	shared_ptr<P> p1(new P());
	shared_ptr<P> p2;
	p2 = p1;
	if(p1 != 0)
		p1->print();
	
	p2->print();
	
	
	
	
}
