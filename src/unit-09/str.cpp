//
// Created by ssiso on 2019/4/26.
//
#include <cstring>
#include <iostream>
#include "str.h"

using namespace std;

Str::Str(char *s) {
    st = new char[strlen(s) + 1];
    std::strcpy(st, s);
}

Str::Str(Str &s) {
    cout << s.st << endl;
    cout << "Str::Str(Str &s)" << endl;

    st = new char[strlen(s.st) + 1];
    strcpy(st, s.st);
}

Str &Str::operator=(Str &s) {
    if (this == &s) {
        return *this;
    }
    delete st;
    st = new char[strlen(s.st) + 1];
    strcpy(st, s.st);
    return *this;
}

Str &Str::operator=(char *s) {
    delete st;
    st = new char[strlen(s) + 1];
    strcpy(st, s);
    return *this;
}

void Str::print() {
    cout << st << endl;
}

std::ostream &operator<<(std::ostream &stream, const Str& str) {
    stream << str.st << endl;
    return stream;
}

std::istream &operator>>(std::istream &stream, Str &str) {
    stream >> str.st;
    return stream;
}
