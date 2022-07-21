//
// Created by 86451 on 2022/7/17.
//
#include "iostream"
#include "array"
#include "string"

const int Seasons = 4;
const std::array<std::string, Seasons> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(std::array<double, Seasons> *);
void show(std::array<double, Seasons>);

int main(){
    std::array<double, Seasons> expenses;
    fill(&expenses);
    show(expenses);
}

void fill(std::array<double, Seasons> * pa){
    using namespace std;
    for (int i = 0; i < Seasons; ++i){
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> (*pa)[i];
    }
}

void show(std::array<double, Seasons> da){
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; ++i){
        cout << Snames[i] << ": $" << da[i] << endl;
        total += da[i];
    }
    cout << "Total Expenses: $" << total << endl;
}