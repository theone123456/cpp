//
// Created by 86451 on 2022/7/10.
//
#include "iostream"

int main(){
    /**
     * 同java一样
     * a++表示先获取a的值再+1
     * ++a表示先+1再获取a的值
     * --同理
     */
    using namespace std;
    int a = 20, b = 20;
    cout << "a = " << a << ": b = " << b << endl;
    cout << "a++ = " << a++ << ": ++b = " << ++b << endl;
    cout << "a = " << a << ": b = " << b << endl;
}