//
// Created by 86451 on 2022/6/26.
//
#include <iostream>

int main(){
    using namespace std;

    int carrots;    // 定义变量
    carrots = 25;   // 给变量赋值

    cout << "I have " << carrots << " carrots.\n";  // 拼接字符串，并进行类型转换
    carrots = carrots - 1;
    cout << "Now I have " << carrots << " carrots.\n";

    /*
     * int a;
     * int b;
     * int c;
     * a = b = c = 1;
     * C++支持连续赋值
     */
    return 0;
}