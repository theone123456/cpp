//
// Created by 86451 on 2022/7/10.
//
#include "iostream"

int main(){
    using namespace std;
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y'){
        cout << 1;
    } else if (ch == 'n' || ch == 'N'){
        cout << 2;
    } else{
        cout << 3;
    }
}