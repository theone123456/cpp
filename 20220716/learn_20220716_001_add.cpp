//
// Created by 86451 on 2022/7/16.
//
#include "iostream"
const int ArSize = 6;

int main(){
    using namespace std;
    float naaq[ArSize];
    int i = 0;
    float temp;
    cout << "First value: ";
    cin >> temp;
    while (i < ArSize && temp >= 0){
        naaq[i++] = temp;
        if (i < ArSize){
            cout << "Next value: ";
            cin >> temp;
        }
    }
    if (i == 0){
        cout << "No data--bye\n";
    } else{
        cout << "Enter your NAAQ: ";
        float you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; ++j) {
            if (naaq[j] > you){
                ++count;
            }
        }
        cout << count;
    }
}