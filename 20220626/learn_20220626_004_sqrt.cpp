//
// Created by 86451 on 2022/6/26.
//
#include <iostream>
#include <cmath>

int main(){
    using namespace std;

    double area;
    cout << "please input a num:\n";
    cin >> area;
    double side;
    side = sqrt(area);  // 调用cmath中的sqrt方法
    cout << "the num is " << side;
    return 0;   // main函数中可以省略
}