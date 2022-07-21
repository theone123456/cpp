//
// Created by 86451 on 2022/7/16.
//
#include "iostream"
const int Max = 5;

int main(){
    using namespace std;
    double fish[Max];
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i]){ // cin >> fish[i]有bool类型返回值
        if (++i < Max)
            cout << "fish #" << i + 1 << ": ";
    }
    double total = 0.0;
    for (int j = 0; j < i; ++j) {
        total += fish[j];
    }
    if (i == 0)
        cout << "No fish\n";
    else
        cout << total / i << " = avg weight of " << i << "fish\n";
}