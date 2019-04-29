//
// Created by ssiso on 2019/4/26.
//

#include <stdio.h>
#include "str.h"

using namespace std;

int main(int argc, char **argv) {
    char *s = (char *) "test";
    Str str1(s), str2(s), str3(str1);
    str1.print();
    str2 = str1;
    str2.print();
    str3 = s;
    str3.print();

    cout << str1 << endl;

    cin >> str1;

    cout << str1;

    Str str4 = str1; // 定义变量的时候，= 调用的不是赋值。实际在这里情况就相当于 Str str4(str1)。将会调用构造函数
}