#include <iostream>
#include <map>

using namespace std;

int main(){
	map<int, string> m;
	m[1] = "One";
	m[2] = "Two";
	m[3] = "Three";
	
	for(int i = 1; i<=3; i++){
		cout << m[i] << endl;
	}
	
	map<int, string>::iterator itr = m.begin();
	while(itr!=m.end()){
		cout << "key : " << itr->first << " - value : " << itr->second << endl;
		++itr;
	}
}