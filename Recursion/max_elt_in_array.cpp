#include <iostream>

using namespace std;

int maxEltInArray(int* arr, int* maxElt, int sizeElt){
    if(sizeElt == 0) return *maxElt;

    if(*arr > *maxElt)
        *maxElt = *arr;

    return maxEltInArray(arr + 1, maxElt, sizeElt - 1);
}

int main(){
    int arr[5] = {10, 5, 6, 14, 1};
    int maxElt = arr[0];
    int sizeElt = sizeof(arr)/sizeof(arr[0]);
    cout << "Max Element = " << maxEltInArray(arr, &maxElt, sizeElt);
}