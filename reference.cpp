#include <iostream>
#include <vector>

using namespace std;

int swap(int& i, int& j){
	int temp = i;
	i = j;
	j = temp;
}

int main(){
	int i = 10;
	int& j = i;
	
	cout << "i " << i << endl;
	cout << "j " << j << endl;
	cout << endl;
	j = 20;
	
	cout << "i " << i << endl;
	cout << "j " << j << endl;
	cout << endl;
	
	int y = 30, z = 40;
	cout << y << " " << z << endl;
	swap(y,z);
	cout << y << " " << z << endl;
	
	vector<int> increment{10, 15, 20};
	
	for(int& v:increment){
		v += 5;
	}
	
	vector<int>::iterator itr;
	
	for(itr = increment.begin(); itr!=increment.end(); itr++){
		cout << *itr << " ";
	}
	cout << endl;
}