//
// Created by 86451 on 2022/7/3.
//
#include "iostream"
#include "string"

struct inflatable{
    std::string name;
    float volume;
    double price;
};

int main(){
    inflatable bouquet{"sunflowers", 0.20, 12.49};
    inflatable choice;
    choice = bouquet;   // 结构体能够赋值给相同类型的其他结构体
    std::cout << "choice.name = " << choice.name << std::endl;
    std::cout << "choice.volume = " << choice.volume << std::endl;
    std::cout << "choice.price = " << choice.price << std::endl;
}
