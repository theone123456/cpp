//
// Created by 86451 on 2022/7/17.
//
#include "iostream"

using namespace std;

void n_chars(char, int);

int main(){
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q'){
        cout << "Enter a integer: ";
        cin >> times;
        n_chars(ch, times);
        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
}

void n_chars(char c, int n){
    while (n-- > 0)
        cout << c;
}