//
// Created by 86451 on 2022/7/3.
//
#include "iostream"

struct a_y_e{
    int year;
};

int main(){
    a_y_e s1, s2, s3;
    s1.year = 1998;
    a_y_e * pa = &s2;
    pa->year = 1999;
    a_y_e trio[3];
    trio[0].year = 2003;
    std::cout << trio->year << std::endl;   // 2003
    const a_y_e * arp[3]{&s1, &s2, &s3};    // 指针的数组
    std::cout << arp[1]->year << std::endl; // 1999
    const a_y_e ** ppa = arp;   // 可以理解为数组指针的指针
    auto ppb = arp;
    std::cout << (*ppa)->year << std::endl;
    std::cout << (*(ppb + 1))->year << std::endl;
}