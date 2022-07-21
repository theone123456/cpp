//
// Created by 86451 on 2022/7/17.
//
#include "iostream"

char * buildstr(char, int);

int main(){
    using namespace std;
    int times;
    char ch;
    cout << "Enter a characters: ";
    cin >> ch;
    cout << "Enter a integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;
    ps = buildstr('+', 20);
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;
}

char * buildstr(char c, int n){
    char * pstr = new char[n + 1];
    pstr[n] = '\0';
    while (n-- > 0)
        pstr[n] = c;
    return pstr;
}
