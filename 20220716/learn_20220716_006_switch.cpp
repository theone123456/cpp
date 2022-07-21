//
// Created by 86451 on 2022/7/16.
//
#include "iostream"

using namespace std;
void showmenu();
void report();
void comfort();

int main(){
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5){
        switch (choice) {
            case 1:
                cout << "\a\n";
                break;
            case 2:
                report();
                break;
            case 3:
                break;
            case 4:
                break;
            default:
                cout << "choice again";
                break;
        }
        showmenu();
        cin >> choice;
    }
}

void showmenu(){
    cout << "Please enter 1, 2, 3, 4, or 5:\n"
            "1) alarm           2) report\n"
            "3)alibi            4)comfort\n"
            "5)quit\n";
}

void report(){
    cout << "shabi\n";
}
