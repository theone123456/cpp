//
// Created by 86451 on 2022/7/16.
//
#include "iostream"
#include "fstream"  // 文件输出依赖的头文件

int main(){
    using namespace std;
    char automobile[50];
    int year;
    double a_price;
    double d_price;

    ofstream outFile;   // 创建一个ofstream对象
    outFile.open("carinfo.txt"); // 将ofstream对象与文件关联，文件存放在cmake-build-debug目录下
    cout << "Enter the make and model of automobile: ";
    cin.getline(automobile, 50);
    cout << "Enter the model year: ";
    cin >> year;
    cout << "Enter the original asking price: ";
    cin >> a_price;
    d_price = a_price * 0.913;

    cout << fixed;
    cout.precision(2);
    cout.setf(ios_base::showpoint);
    cout << "Make and model: " << automobile << endl;
    cout << "Year: " << year << endl;
    cout << "Was asking $" << a_price << endl;
    cout << "Now asking $" << d_price << endl;

    // 调用方法同cout
    outFile << fixed;
    outFile.precision(2);
    outFile.setf(ios_base::showpoint);
    outFile << "Make and model: " << automobile << endl;
    outFile << "Year: " << year << endl;
    outFile << "Was asking $" << a_price << endl;
    outFile << "Now asking $" << d_price << endl;

    outFile.close();    // 关闭对象
}