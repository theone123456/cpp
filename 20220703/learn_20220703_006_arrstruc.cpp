//
// Created by 86451 on 2022/7/3.
//
#include "iostream"
#include "string"

using namespace std;

struct inflatable{
    string name;
    float volume;
    double price;
};

int main(){
    // 结构体数组的定义与初始化
    inflatable guests[2]{
            {"Bambi", 0.5, 21.99},
            {"Godzilla", 2000, 565.99}
    };
    cout << guests[0].name << endl;
}