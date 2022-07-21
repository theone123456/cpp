//
// Created by 86451 on 2022/7/3.
//
#include "iostream"

using namespace std;

// 动态数组的创建及使用
int main(){
    double* p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[0] = " << p3[0] << endl;    // 0.2
    p3 = p3 + 1;
    cout << "p3[0] = " << p3[0] << endl;    // 0.5
    cout << "p3[1] = " << p3[1] << endl;    // 0.8
    delete [] p3;   // 动态数组清理内存
}