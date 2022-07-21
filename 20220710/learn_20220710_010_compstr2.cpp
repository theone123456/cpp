//
// Created by 86451 on 2022/7/10.
//
#include "iostream"
#include "string"

int main(){
    using namespace std;
    string word = "?ate";
    // 与java不同的是，字符串可以用运算符直接比较
    for (char i = 'a'; word != "mate" ; i++) {
        cout << word << endl;
        word[0] = i;
    }
}