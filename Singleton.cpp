#include <iostream>

using namespace std;

// use the final keyword to make the class non-inheritable
class SingleTon final{
	private:
		static SingleTon* singlePtr;
		int value = 1;
		// delete the copy constructor and the assignment operator
		
		SingleTon(const SingleTon&) = delete;
		SingleTon& operator=(const SingleTon&) = delete;
	
	protected:
		SingleTon() = default;
	
	public:
		static SingleTon* getInstance(){
			if(singlePtr == NULL){
				singlePtr = new SingleTon();
			}
			return singlePtr;
		}

	void print(){
		cout << "Incrementing value from " << value << " to ";
		value += 1;
		cout << value << endl;
	}
};

SingleTon* SingleTon::singlePtr = NULL;

int main(){
	SingleTon* s1 = SingleTon::getInstance();
	s1->print();
	SingleTon* s2 = SingleTon::getInstance();
	s2->print();
}
