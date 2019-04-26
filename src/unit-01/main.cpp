/**
 * 基础语法
 * 1. 类型定义和初始化
 */
#include <iostream>

using namespace std;

/**
 * c++ 中可以使用 类型() 的构造语法定义对象，类如 int j(2),可以将c中的基础变量看作对象来处理
 */

int main(int argc, char **argv) {
    int i = 1;
    int j(2); // 等同于 j = 2;
    cout << "i:" << i << endl;
    cout << "j:" << j << endl;

    char a = 'a';
    char b('b'); // 等同于 b = 'b';
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    double n = 0.1;
    cout << "n:" << n << endl;
    return 0;
}
