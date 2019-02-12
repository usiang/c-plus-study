//
// Created by 傅双亮 on 2019/2/12.
//
#include <iostream>
#include <cmath>

using namespace std;

// 求 11-999 范围的数m m平方也是回文数，m的立方也是回文数
// 回文数： 左右对称的树， 11 121

bool is_tracts_3(int n);

bool is_tracts_number(int n);

int main(int argc, char **argv) {
    for (int i = 11; i < 999; i++) {
        if (is_tracts_3(i)) {
            cout << i << "\t" << ldexp(i, 2) << "\t" << ldexp(i, 3) << endl;
        }
    }
    return 0;
}

bool is_tracts_3(int n) {
    return is_tracts_number(n)
           && is_tracts_number((int) ldexp(n, 2))
           && is_tracts_number((int) ldexp(n, 3));
}

bool is_tracts_number(int n) {
    string s = to_string(n);
    int len = (int) s.length();
    int axis = len / 2;

    for (int i = 0; i <= axis; i++) {
        if (s[i] != s[len - (i + 1)]) {
            return false;
        }
    }
    return true;
}