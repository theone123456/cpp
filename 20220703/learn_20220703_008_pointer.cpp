//
// Created by 86451 on 2022/7/3.
//
#include "iostream"

int main(){
    using namespace std;
    int updates = 6;
    // * 可以理解为一个转换符，能够返回地址存储的值
    int * p_updates;
    p_updates = &updates;

    cout << "Values: updates = " << updates
         << ", *p_updates = " << *p_updates << endl;
    cout << "Addresses: &updates = " << &updates
         << ", p_updates = " << p_updates << endl;
    *p_updates += 1;
    cout << "Now updates = " << updates << endl;    // 7
}