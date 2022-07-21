//
// Created by 86451 on 2022/7/10.
//
#include <iostream>

int main(){
    using namespace std;
    char ch;
    int spaces = 0, total = 0;
    cin.get(ch);
    while (ch != '.'){
        if (ch == ' ')  // 条件判断
            ++spaces;
        ++total;
        cin.get(ch);
    }
    cout << "spaces = " << spaces << endl;
    cout << "total = " << total << endl;
}