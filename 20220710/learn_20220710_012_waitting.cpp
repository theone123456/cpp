//
// Created by 86451 on 2022/7/10.
//
#include "iostream"
#include "ctime"

/**
 * 定义类型别名的两种方式
 * 1. #define BYTE char
 *  预处理器在编译程序用char替换所有的BYTE，使BYTE成为char的别名
 *
 * 2. typedef typeName aliasName
 *  使用typedef关键字创建别名
 *
 * @return
 */

int main(){
    using namespace std;
    float secs;
    cin >> secs;
    // clock_t：类型别名
    clock_t delay = secs * CLOCKS_PER_SEC;  // CLOCKS_PER_SEC：相当于1s
    cout << "start\a\n";
    clock_t start = clock();
    while (clock() - start < delay);
    cout << "done\a\n";
}