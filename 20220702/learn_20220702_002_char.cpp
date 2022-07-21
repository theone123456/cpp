//
// Created by 86451 on 2022/7/2.
//
#include <iostream>

int main(){
    using namespace std;
    char ch;

    cout << "please input a char: \n";
    cin >> ch;  // 即使输入多个字符，也只能读取第一个
    cout << "ret = " << ch << endl;
}
