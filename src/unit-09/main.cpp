//
// Created by ssiso on 2019/4/26.
//

#include "str.h"

int main(int argc, char **argv) {
    char * s = (char *)"122222222";
    Str str1(s);
    str1.print();
    Str str2 = str1;
    str2.print();
}