#include <iostream>

using namespace std;

int add(int a, int b){
	return a + b;
}

int add(int a, int b, int c){
	return a + b + c;
}

void add(){
	cout << "Simple add" << endl;
}

int main(){
	add();
	cout << add(1,2) << endl;
	cout << add(1,2,3);
}