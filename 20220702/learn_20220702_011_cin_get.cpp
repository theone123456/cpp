//
// Created by 86451 on 2022/7/3.
//
#include <iostream>

/*
 * 注意：
 *  cin.get(arrayName, length)方法是一次性将输入的输入全部读取，或是遇到换行符截止
 *  随后根据每次调用该方法时指定的长度进行分配
 *  当使用cin.get()跳过换行符时会跳过一个字符！
 */
int main(){
    using namespace std;
    const int Size = 20;
    char name[Size];
    char hobby[Size];
    cout << "Enter your name:\n";
    // 该方式同cin.getline(arrayName, length)，但是cin中会存储换行符
    // cin.get()表示读取下一个字符，可以用来跳过存储的换行符
    cin.get(name, Size);  // get()不能省略
    cout << "Your name is " << name << endl;
    cout << "Enter your hobby:\n";
    cin.get(hobby, Size).get();
    cout << "Your hobby are " << hobby;
}
