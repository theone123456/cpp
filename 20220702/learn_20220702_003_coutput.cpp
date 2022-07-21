//
// Created by 86451 on 2022/7/2.
//
#include <iostream>

int  main(){
    using namespace std;
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    cout << "Add one to the character code:" << endl;
    ch = ch + 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;

    // cout.put(sh):输出单个字符
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');
}
