#include<iostream>
#include <unistd.h>

using namespace std;

int main(){
	fork();
	fork();
	cout << "Amal" << endl;//print output 4 times. 2^numberofprocess
}