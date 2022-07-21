//
// Created by 86451 on 2022/7/17.
//
#include "iostream"

void simple();

int main(){
    using namespace std;
    cout << "main() will call the simple() function:\n";
    simple();
    cout << "main() is finished the simple() function:\n";
}

void simple(){
    using namespace std;
    cout << "I'm but a simple function.\n";
}