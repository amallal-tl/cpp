#include <iostream>

using namespace std;

void Fibanocci(int a, int b, int limit){
    if(0 == limit) return;
    int temp = b;
    b = a + b;
    a = temp;
    cout << b << " ";
    Fibanocci(a, b, limit - 1);
}

int main(){
    int a = 0, b = 1, limit = 10;
    cout << a << " " << b << " ";
    Fibanocci(a, b, limit);
}