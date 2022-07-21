//
// Created by 86451 on 2022/7/16.
//
#include "iostream"
#include "climits"
bool is_int(double);

int main(){
    using namespace std;
    double num;
    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num)) {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = int (num);
    cout << "You're entered the integer " << val << "\nBye\n";
}

bool is_int(double x){
    if (x <= INT_MAX && x >= INT_MIN)
        return true;
    return false;
}