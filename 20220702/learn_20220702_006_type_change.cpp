//
// Created by 86451 on 2022/7/2.
//
#include <iostream>

int main(){
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);  // 编译错误
    int debt = 7.2e12;
    cout << "tree = " << tree << endl;  // 3.000000，类型转换
    cout << "guess = " << guess << endl;    // 3，类型转换丢弃小数部分
    cout << "debt = " << debt << endl;  // 2147483647，类型转换损失精度
    return 0;
}
