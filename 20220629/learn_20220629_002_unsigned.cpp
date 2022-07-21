//
// Created by 86451 on 2022/6/29.
//
#include <iostream>
#define ZERO 0  // 将程序中的ZERO变量都替换为0
#include <climits>

int main(){
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "sam: " << sam << endl; // 32767
    cout << "sue: " << sue << endl; // 32767
    sam = sam + 1;
    sue = sue + 1;
    cout << "sam: " << sam << endl; // -32768
    cout << "sue: " << sue << endl; // 32768
    sam = ZERO;
    sue = ZERO;
    cout << "sam: " << sam << endl; // 0
    cout << "sue: " << sue << endl; // 0
    sam = sam - 1;
    sue = sue - 1;
    cout << "sam: " << sam << endl; // -1
    cout << "sue: " << sue << endl; // 65535
}
