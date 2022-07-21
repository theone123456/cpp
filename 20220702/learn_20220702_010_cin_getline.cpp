//
// Created by 86451 on 2022/7/3.
//
#include <iostream>

/*
 * cin.getline(arrayName, length)应该也是一次读取全部
 * 但是若是输入超出本次指定长度，下次则直接跳过cin.getline(arrayName, length)的调用
 * 否则则可以调用成功，且输入数据不共享，即重新输入，重新读取
 */

int main(){
    using namespace std;
    const int SIZE = 20;
    char name[SIZE];
    char hobby[SIZE];
    cout << "Enter your name:\n";
    // 输入参数为数组名，读取字符数
    // 实际读取输入字符数-1，需要留给空字符
    // 以Enter提交数据
    cin.getline(name, SIZE);
    cout << "Your name is " << name << endl;
    cout << "Enter your hobby:\n";
    cin.getline(hobby, SIZE);
    cout << "Your hobby are " << hobby;
}
