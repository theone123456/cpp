//
// Created by 86451 on 2022/7/16.
//
#include "iostream"
#include "cctype"

int main(){
    using namespace std;
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;

    cin.get(ch);
    // 不知下述方法，用到时再查表
    while (ch != '@'){
        if (isalpha(ch)) // 参数是字母则返回true
            chars++;
        else if(isspace(ch)) // 参数是空白字符则返回true，包括回车、制表符等
            whitespace++;
        else if (isdigit(ch)) // 参数是数字则返回true
            digits++;
        else if (ispunct(ch)) // 参数是标点符号则返回true
            punct++;
        else
            others++;
        cin.get(ch);
    }
    cout << chars << " letters, " << whitespace << " whitespace, " << digits << " digits, " << punct << " punctuations, " << others << "others.\n";
}