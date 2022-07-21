//
// Created by 86451 on 2022/7/3.
//
#include "iostream"
#include "cstring"
using namespace std;

int main(){
    char animal[20] = "bear";
    const char * bird = "wren"; // 将wren的地址值赋给bird指针，可以像使用字符串那样使用指针
    char * ps;

    cout << animal << " and " << bird << endl;
    cout << "Enter a kind of animal: ";
    cin >> animal;
    ps = animal;    // 赋值地址值
    cout << ps << "!\n";    // 指针类型为char*时，cout输出的是指向的字符串字面值
    cout << "Before using strcpy():\n" << animal << " at " << (int*) animal << endl;    // cout显示char*的地址值需要进行强转
    cout << ps << " at " << (int*) ps << endl;
    ps = new char[strlen(animal) + 1];  // 新开辟一个存储空间，根据字符串的长度以避免内存浪费
    strcpy(ps, animal);
    cout << "After using strcpy():\n" << animal << " at " << (int*) animal << endl;
    cout << ps << " at " << (int*) ps << endl;
    delete [] ps;
}