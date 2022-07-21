//
// Created by 86451 on 2022/7/17.
//
#include "iostream"

long double probability(unsigned, unsigned);    // unsigned默认是unsigned int

int main(){
    using namespace std;
    double total, choices;
    while ((cin >> total >> choices) && choices <= total){
        cout << "You have one chance in ";
        cout << probability(total, choices);
        cout << " of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye\n";
}

long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}

