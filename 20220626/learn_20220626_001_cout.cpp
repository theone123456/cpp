//
// Created by 86451 on 2022/6/26.
//
#include <iostream> // #include：预处理器编译指令

int main(){ // 函数名之前是函数的返回值类型
    using namespace std;    // using namespace：编译指令

    /*
     * <<表明了信息流动的路径，该语句表示将字符串传递给cout
     */
    cout << "Come up and C++ me some time.";    // 输出到控制台
    cout << endl;   // 换行
    cout << "You won't regret it!" << endl; // "\n"是换行符

    /*
     * 若省略编译指令，上面代码可写为：
     * std::cout << "Hello World!";
     * std::cout << std::endl;
     *
     * 也可对名称空间的某个方法单独指定，例如：
     * using std::cout
     */
    return 0;   // main()结束
}