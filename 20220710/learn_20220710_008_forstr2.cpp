//
// Created by 86451 on 2022/7/10.
//
#include "iostream"
#include "string"

using namespace std;

int main(){
    string word = "stressed";
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1 ; j < i; --i, ++j) { // for循环可以不只一个变量，用','进行分隔
        cout << i << j << " \n";
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << word;
}
