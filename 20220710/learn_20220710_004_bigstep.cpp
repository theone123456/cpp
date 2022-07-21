//
// Created by 86451 on 2022/7/10.
//
#include "iostream"

int main(){
    using namespace std;
    int step = 2;
    // for循环步长可以不等于1
    // 输出0-100的所有偶数
    for (int i = 0; i <= 100; i += step) {
        cout << i << endl;
    }
}