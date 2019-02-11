#include <iostream>

using namespace std;

/**
 * c++ 中字符数组的处理
 */

int main(int argc, char **argv) {
    /**
     * 在C/C++中，基础数据类型有 int double float char，没有string.字符串不是基础数据类型，
     * 在C中，字符串是使用char[] 实现的
     */

    //一般的字符，字符的定义是通过单引号('')
    char a = 'a';
    char b('b');

    cout << "a:" << a << endl;
    cout << "b:" << b << endl;

    // 双引号的字符串是以 '\0' 结尾
    char s1[5] = "1234";
    cout << sizeof(s1) << endl;
    cout << s1 << endl;

    char s2[] = {'a','b','c'};
    cout << sizeof(s2) << endl;
    cout << s2 << endl;

    char *s3 = new char[10]();
    cout << s3 << endl;
    delete[](s3);
    s3 = NULL;

    return 0;
}
