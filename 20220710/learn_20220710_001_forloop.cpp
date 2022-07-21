//
// Created by 86451 on 2022/7/10.
//
#include "iostream"

int main(){
    using namespace std;
    // for循环，基本语法与java一样
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }

    cout << "*********************\n";

    for (int i = 5; i ; i--) { // i = 0时表示FALSE，测试表达式值是Boolean值
        cout << i << endl;
    }
}