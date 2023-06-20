#include <iostream>

using namespace std;

template<typename T>
T myMax (T a, T b){
	return a > b ? a : b;
}



int main(){
	cout << "2 or 4 = " << myMax(2,4) << endl;
	cout << "a or g = " << myMax('a', 'g') << endl;
}