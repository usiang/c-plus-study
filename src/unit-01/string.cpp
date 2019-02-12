#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    string s = "abc";
    cout << s << endl;
    getline(cin,s);
    cout << s << endl;
    return 0;
}
