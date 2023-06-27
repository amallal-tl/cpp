#include <iostream>

using namespace std;

int main(){
	int i = 7;
	int* ptr = &i;
	cout << *ptr << endl;
	cout << ptr << endl;
	++ptr;
	cout << ptr << endl;
	++ptr;
	cout << ptr << endl;
	ptr++;
	cout << ptr << endl;
	ptr++;
	cout << ptr << endl;
	
	int* q = &i;
	int& r = 10;

}