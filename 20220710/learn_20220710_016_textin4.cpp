//
// Created by 86451 on 2022/7/10.
//
#include "iostream"

int main(){
    using namespace std;
    char ch;
    int count = 0;
    cin.get(ch);
    while ((ch = cin.get() != EOF)){
        cout << ch;
        ++count;
        cin.get(ch);
    }
}
