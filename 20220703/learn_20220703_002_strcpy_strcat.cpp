//
// Created by 86451 on 2022/7/3.
//
#include <iostream>
#include <cstring>
#include <string>

int main(){
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "panther";

    str1 = str2;
    strcpy(charr1, charr2); // 将字符串或字符串数组复制到另一个字符串数组中

    str1 += " paste";
    strcat(charr1, "juice");    // 将字符串添加到字符串数组的末尾

    int len1 = str1.size(); // 返回字符串的长度
    int len2 = strlen(charr1);  // 返回字符串数组的长度

    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";
}


