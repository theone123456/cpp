//
// Created by 86451 on 2022/7/2.
//
#include <iostream>

int main(){
    using namespace std;

    int a, b, c;
    a = 19.99 + 11.99;  // 31，先计算再进行类型转换
    b = (int) 19.99 + (int) 11.99;  // 30，先进行类型转换
    c = int (19.99) + int (11.99);  // 30，先进行类型转换
    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;

    char ch = 'Z';
    cout << 'ch = ' << ch << ", ch code = " << static_cast<int>(ch) << endl;

    return 0;
}
