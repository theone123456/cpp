//
// Created by 86451 on 2022/7/2.
//

#include <iostream>
#include <cstring>

/*
 * 常规的cin方法有个弊端：
 * 终端输入依赖空格、制表符、换行符等区分输入批次，因此当输入字符串中有输入存在时
 * 会认为是输入了两个数据，而直接跳过下次输入直接读取
 * 此外，cin无法校验输入字符串是否满足字符串数组的长度要求
 */
int main(){
    using namespace std;
    const int Size = 15;// 创建字符串数组时要预留空字符的位置
    // char[]中包含了'\0'的是字符串，没有包含的是字符数组
    // 直接初始化为字符串默认包含了空字符
    char name1[Size];
    char name2[Size] = "C++owboy";
    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;   // 输入长度大于等于15并不会报错，而且可以正常的打印，但strlen(name1)仍输出15
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";    // 计算字符串长度，不包含空字符
    cout << "in a array of " << sizeof name1 << " bytes.\n";    // 存储字符串的数组长度
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;  // 遇到'\0'则停止
}
