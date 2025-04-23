#include <iostream>

using namespace std;

class A{
    public:
    static int var;
};

int A::var = 10;

int main(){
    cout << A::var << endl;
    return 0;
}
