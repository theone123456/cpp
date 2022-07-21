//
// Created by 86451 on 2022/7/2.
//
#include <iostream>

int main(){
    using namespace std;
    // 数组创建方式1：先创建，再初始化
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    // 数组创建方式2：创建时初始化
    int yamcosts[3] = {20, 30, 5};
    cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
    cout << "Total yamcosts = " << yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2] << endl;
    cout << "Size of yams array = " << sizeof yams << endl; // 输出数组存储元素的总字节数
    cout << "Size of yamcosts one = " << sizeof yamcosts[0] << endl;    // 输出数组中单个元素的字节数

    return 0;
}
