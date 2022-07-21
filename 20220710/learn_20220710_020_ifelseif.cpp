//
// Created by 86451 on 2022/7/10.
//
#include "iostream"
const int Fave = 27;

int main(){
    using namespace std;
    int n ;
    do {
        cin >> n;
        if (n < Fave)
            cout << "Too Low, -- guess again\n";
        else if (n > Fave)
            cout << "Too High, -- guess again\n";
        else
            cout << "Bingo";
    } while (n != Fave);
}