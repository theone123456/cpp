//
// Created by 86451 on 2022/7/3.
//
#include "iostream"
using namespace std;

int main(){
    int nights = 1001;
    int* pt = new int;  // 通过new的方式创建指针
    *pt = 1001;
    cout << "nights = " << nights << endl;
    cout << "nights address = " << &nights << endl;
    cout << "*pt = " << *pt << endl;
    cout << "pt = " << pt << endl << endl;

    double* pd = new double;
    *pd = 10000001.0;
    cout << "*pd = " << *pd << endl;
    cout << "pd = " << pd << endl;
    cout << "&pd = " << &pd << endl;
    cout << "size of pt = " << sizeof pt << endl;
    cout << "size of *pt = " << sizeof *pt << endl;
    cout << "size of pd = " << sizeof pd << endl;
    cout << "size of *pd = " << sizeof *pd << endl;

    // 释放内存，但不会删除指针，指针可以指向一个新分配的内存块
    // delete只能释放new的指针内存，对变量创建的指针使用会报错
    // 不建议连续使用多次，但对空指针无影响
    delete pt;
    delete pd;
}

