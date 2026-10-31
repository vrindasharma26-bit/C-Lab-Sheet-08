#include <iostream>
#include <sstream>
using namespace std;

int countWords(string s) {
    stringstream ss(s);
    string word;
    int count = 0;

    while (ss >> word)
        count++;

    return count;
}

int main() {
    string s;

    cout << "Enter a sentence: ";
    getline(cin, s);

    cout << "Number of words: " << countWords(s);

    return 0;
}
