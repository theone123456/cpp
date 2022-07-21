//
// Created by 86451 on 2022/7/2.
//
#include <iostream>

int main(){
    using namespace std;
    // cout默认会将浮点型末尾的0删除，调用该函数对有方法进行覆盖，保留6位小数输出
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;

    // float出现越界，精度损失
    cout << "tub = " << tub;    // 3.333333
    cout << ", a million tubs = " << million * tub; // 3333333.250000
    cout << ",\nand ten million tubs = ";
    cout << 10 * million * tub << endl; // 33333332.000000

    cout << "mint = " << mint << " and a million mints = "; // 3.333333
    cout << million * mint << endl; // 3333333.333333
}