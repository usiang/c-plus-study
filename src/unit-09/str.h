//
// Created by ssiso on 2019/4/26.
//

#ifndef C_PLUS_STUDY_STR_H
#define C_PLUS_STUDY_STR_H


class Str {
private:
    char *st;
public:
    Str(char *s);

    Str(Str &s);

    Str &operator=(Str &s);

    Str &operator=(char *s);

    void print();

    ~Str() { delete st; };
};


#endif //C_PLUS_STUDY_STR_H
