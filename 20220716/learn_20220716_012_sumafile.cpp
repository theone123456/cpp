//
// Created by 86451 on 2022/7/16.
//
#include "iostream"
#include "fstream"
#include "cstdlib"
const int SIZE = 60;

int main(){
    using namespace std;
    char fileName[SIZE];
    ifstream inFile;
    cout << "Enter name of data file: ";
    cin.getline(fileName, SIZE);    // 建议输入绝对路径
    inFile.open(fileName);  // 打开文件
    if (!inFile.is_open()){
        cout << "Could not open the file " << fileName << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
    inFile >> value;
    while (inFile.good()){
        ++count;
        sum += value;
        inFile >> value;
    }
    if (inFile.eof())   // 文件读取不应超过EOF
        cout << "End of file reached.\n";
    else if (inFile.fail()) // 文件最后一次读取类型不匹配返回true，读到EOF也返回true
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else{
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close(); // 关闭资源
}