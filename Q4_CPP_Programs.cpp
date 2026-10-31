#include <iostream>
#include <string>
using namespace std;

void copyString(string &s1, string &s2) {
    s2 = s1;
}

int main() {
    string s1, s2;

    cout << "Enter a string: ";
    getline(cin, s1);

    copyString(s1, s2);

    cout << "Copied string: " << s2;

    return 0;
}
