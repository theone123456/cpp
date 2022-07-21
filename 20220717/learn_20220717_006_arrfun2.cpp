//
// Created by 86451 on 2022/7/17.
//
#include "iostream"

using namespace std;

const int ArSize = 8;
int sum_arr(int[], int);

/**
 * sizeof cookies是整个数组的长度，sizeof arr是指针变量的长度
 * 指针变量8个字节，一个元素4个字节
 * @return
 */

int main(){
    int cookies[ArSize] = {1, 2 , 4, 8, 16, 32, 64, 128};
    cout << cookies << " = array address, ";
    cout << sizeof(cookies) << " = sizeof cookies\n";
    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << endl;
    sum = sum_arr(cookies, 3);
    cout << "First three eaters ate " << sum << " cookies.\n";
    sum = sum_arr(cookies + 4, 4);  // 指的是右移四个元素
    cout << "Last four eaters ate " << sum << " cookies.\n";
}

int sum_arr(int arr[], int n){
    int total = 0;
    cout << arr << " = arr, ";
    cout << sizeof(arr) << " = sizeof arr\n";
    for (int i = 0; i < n; ++i)
        total += arr[i];
    return total;
}
