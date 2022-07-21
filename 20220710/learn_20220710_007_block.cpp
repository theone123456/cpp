//
// Created by 86451 on 2022/7/10.
//
#include "iostream"

int main(){
    using namespace std;
    double num;
    double sum = 0.0;
    for (int i = 0; i < 5; ++i){
        cout << "Value " << i << ": ";
        cin >> num;
        sum += num;
    }
    cout << "sum = " << sum << endl;
    cout << "avg = " << sum / 5 << endl;
}