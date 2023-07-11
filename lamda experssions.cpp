#include<iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> m {5, 2, 10, 11};

	for(auto i = m.begin(); i != m.end(); i++){
		cout << *i << " + 10 = " << [] (int x) -> int {return x+10;}(*i) << endl;
	}
}