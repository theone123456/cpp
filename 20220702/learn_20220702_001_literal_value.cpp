//
// Created by 86451 on 2022/7/2.
//
#include <iostream>

int main(){
    using namespace std;

    int chest = 42; // 二进制
    int waist = 042;    // 八进制
    int inseam = 0x42;  // 十六进制

    // 默认情况cout以十进制进行输出
    cout << "chest = " << chest << endl;    // 42
    cout << "waist = " << waist << endl;    // 34
    cout << "inseam = " << inseam << endl;  // 66

    cout << dec;    // 以十进制方式显示整数
    cout << "chest = " << chest << endl;    // 42
    cout << hex;    // 以十六进制方式显示整数
    cout << "waist = " << waist << endl;    // 22，34的十六进制写法为22
    cout << oct;    // 以八进制方式显示整数
    cout << "inseam = " << inseam << endl;  // 102，66的八进制写法为102
}
