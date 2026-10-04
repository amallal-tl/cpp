#include <iostream>

using namespace std;

void printNumber(int n){
    if(n == 0) return;
    cout << n << endl;
    printNumber(n - 1);
}

int main(){
    int var = 10;

    printNumber(var);
}