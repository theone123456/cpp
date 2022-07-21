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
    inflatable * ps = new inflatable;   // 动态创建结构体
    cout << "Enter name of inflatable item: ";
    getline(cin, ps->name);
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << endl;
    cout << "Price: " << ps->price << endl;
    delete ps;
}