#include <iostream>
using namespace std;

class Example {
public:
    void operator() () {
        cout << "Function call operator called "<< endl;
    }
	
	void print(){
		cout << "print";
	}
};

int main() {
    Example e;
    e();
	e.print();
    return 0;
}
