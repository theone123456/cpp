//
// Created by 86451 on 2022/7/3.
//
#include "iostream"
#include "string"
#include "cstring"

int main(){
    using namespace std;
    char charr[20];
    string str;
    cout << "Length of string in charr before inputs: "
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
}
