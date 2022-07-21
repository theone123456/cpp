//
// Created by 86451 on 2022/6/29.
//
#include <iostream>
#include <climits>

int main(){
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof 能够返回变量类型或长度
    cout << "int is " << sizeof n_int << " bytes.\n";   // 4
    cout << "short is " << sizeof n_short << " bytes.\n";   // 2
    cout << "long is " << sizeof n_long << " bytes.\n"; // 4
    cout << "long long is " << sizeof n_llong << " bytes.\n";   // 8

    cout << "Maximum values:\n";
    cout << "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long: " << n_llong << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
    return 0;
}