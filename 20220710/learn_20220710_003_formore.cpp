//
// Created by 86451 on 2022/7/10.
//
#include "iostream"
const int ArSize = 16;

// 求阶乘，并输出
int main(){
    using namespace std;
    long long arr[ArSize];
    arr[1] = arr[0] = 1LL;
    for (int i = 2; i < ArSize; i++) {
        arr[i] = arr[i - 1] * i;
    }
    for (int i = 0; i < ArSize; i++) {
        cout << i << "! = " << arr[i] << endl;
    }
}
