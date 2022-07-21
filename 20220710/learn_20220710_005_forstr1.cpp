//
// Created by 86451 on 2022/7/10.
//
#include "iostream"
#include "string"

int main(){
    using namespace std;
    string word = "animal";
    for (int i = 0; i < word.size(); i++) { // for循环遍历字符串
        cout << word[i] << endl;
    }
}

