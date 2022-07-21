//
// Created by 86451 on 2022/7/10.
//
#include "iostream"

int main(){
    using namespace std;
    int n = 0;
    // 相较于while循环，do_while循环至少会执行一次
    do {
        cout << "n = " << n++ << endl;
    } while (n != 7);
}