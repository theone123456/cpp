//
// Created by 86451 on 2022/7/3.
//
#include "iostream"
#include "vector"
#include "array"

using namespace std;

int main(){
    double a1[4]{1.2, 2.4, 3.6, 4.8};
    vector<double> a2(4);
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/5.0;
    a2[2] = 1.0/7.0;
    a2[3] = 1.0/9.0;
    array<double, 4> a3{3.14, 2.72, 1.62, 1.41};
    array<double, 4> a4;
    a4 = a3;
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    a1[-2] = 20.2;  //  表示a1[0]地址向前移动2个double字节，编译和运行都不报错，但是不建议这样写
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

    // vector和array也能够写负索引，可以使用at()方法赋值到指定位置，以避免误输入负索引
}