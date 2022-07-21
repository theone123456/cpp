//
// Created by 86451 on 2022/7/17.
//
#include "iostream"

const int ArSize = 8;
int sum_arr(int[], int);

int main(){
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << endl;
}

int sum_arr(int arr[], int n){
    int total = 0;
    for (int i = 0; i < n; ++i)
        total += arr[i];
    return total;
}