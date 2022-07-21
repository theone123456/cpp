//
// Created by 86451 on 2022/7/10.
//
#include "iostream"
const int ArSize = 20;

int main(){
    using namespace std;
    char name[ArSize];
    cin >> name;
    int i = 0;
    while (name[i] != '\0'){    // while循环，同java
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
}
