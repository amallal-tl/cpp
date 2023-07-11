#include <iostream>
#include <cstring>
using namespace std;

class String{
	char* str;
	
	public:
	String();
	String(char* val);
	String(const String& val);
};

String::String():str(nullptr){
	str = new char[1];
	str[0] = '\0';
}

String::String(char* val){
	if(val == nullptr){
		str = new char[1];
		str = '\0';
	} else {
		str = new char[strlen(val)+1];
		strcpy(str, val);
		str[strlen(val)] = '\0';
		cout << "Constructed string with value : " << str << endl;
	}
}

String::String(const String& val){
	str = new char[strlen(val.str) + 1];
	strcpy(str, val.str);
	str[strlen(val.str)] = '\0';
	cout << "Moved str2 to str3 " << val.str << " " << str << endl;
}

int main(){
	char temp[] = "Amal";
	String st1;
	String str2(temp);
	String str3(str2);
}