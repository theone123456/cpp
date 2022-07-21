//
// Created by 86451 on 2022/7/3.
//
#include "iostream"
#include "string"

using namespace std;

// 结构体的定义
// 既能局部定义也能全局定义
struct inflatable{
    string name;
    float volume;
    double price;
};

int main(){
    // 结构体的创建与初始化
    inflatable guest = {"Glorious Gloria", 1.88, 29.99};
    inflatable pal = {"Audacious Arthur", 3.12, 32.99};
    cout << "guest name = " << guest.name << endl;  // 获取结构体对象的数据
    cout << "guest.price + pal.price = " << guest.price + pal.price << endl;
}