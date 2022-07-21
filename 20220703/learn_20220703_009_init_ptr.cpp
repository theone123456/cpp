//
// Created by 86451 on 2022/7/3.
//
#include "iostream"

int main(){
    using namespace std;
    int higgens = 5;
    int* pt = &higgens;

    cout << "higgens = " << higgens << endl;
    cout << "higgens address = " << &higgens << endl;
    cout << "*pt = " << *pt << endl;
    cout << "pt = " << pt << endl;
}
