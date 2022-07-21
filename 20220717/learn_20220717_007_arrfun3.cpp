//
// Created by 86451 on 2022/7/17.
//
#include "iostream"

using namespace std;

const int Max = 5;

int fill_array(double[], int);
void show_array(const double[], int);   // 使用const则不能修改传入数组的内容
void revalue(double, double[], int);

int main(){
    double properties[Max];
    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0){
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor)){
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
}

int fill_array(double ar[], int limit){
    double temp;
    int i;
    for (i = 0; i < limit; ++i) {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin){
            cin.clear();    // 当cin错误输入时（不符合类型），为了后续能够继续输入，需要使用clear清楚当前的错误状态
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Input process terminated.\n";
            break;
        } else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n){
    for (int i = 0;i < n;i++){
        cout << "Properties #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

void revalue(double r, double ar[], int n){
    for (int i = 0; i < n; ++i)
        ar[i] *= r;
}