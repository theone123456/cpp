//
// Created by 86451 on 2022/7/10.
//
#include "iostream"
#include "cstring"

int main(){
    using namespace std;
    char word[5] = "?ate";
    // C语言风格的字符串比较
    // strcmp(str1, str2):比较str1和str2是否相等
    // 相等返回值为0（FALSE），不等则返回值不为0（TRUE）
    for (char i = 'a'; strcmp(word, "mate") ; i++) {
        cout << word << ":" << strcmp(word, "mate") << endl;
        word[0] = i;
    }
    cout <<  word << ":" << strcmp(word, "mate") << endl;
    // 不等时返回值与str1和str2的排列顺序有关
    // 若不相等，str1的第一个不相等的字符>str2的编码，则返回1;小于则返回-1
    cout <<  word << ":" << strcmp("nate", word) << endl;
}