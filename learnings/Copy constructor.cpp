#include <iostream>
#include <cstring>

using namespace std;

class String{
    private:
        char* str;
        int size;
    
    public:
        String(const char* str = nullptr);
        String(const String&);
        void change(const char* str);
        void print(){
            cout << str << endl;
        }
};

String::String(const char* s){
    size = strlen(s);
    str = new char[size + 1];
    strcpy(str, s);
}

String::String(const String& obj){
    size = strlen(obj.str);
    str = new char[size + 1];
    strcpy(str, obj.str);
}

void String::change(const char* sNew){
    delete str;
    size = strlen(sNew);
    str = new char[size];
    strcpy(str, sNew);
}

int main(){
    String s1("Amal lal");
    String s2 = s1;
    s2.change("Amal lal T L");
    s1.print();
    s2.print();
}
