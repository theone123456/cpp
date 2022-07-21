//
// Created by 86451 on 2022/6/26.
//
#include <iostream>
void simon(int);    // 函数原型需要声明，否则主函数中无法调用
using namespace std;    // 当多个函数需要使用编译指令时，可以将其定义在外部

int main(){
    // using namespace std;
    simon(3);
    cout << "Pick an integer: \n";
    int count;
    cin >> count;
    simon(count);
    cout << "Done!\n";
    return 0;
}

// 有返回值函数声明方法与定义方法同理
void simon(int n){
    // using namespace std;
    cout << "Simon says touch your toes " << n << " times.\n";
}