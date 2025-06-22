#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
    string S;
    cin >> S;

    string res = "";

    for (char c : S) {
        char lowerC = tolower(c); // chuyen ve chu thuong
        if (!isVowel(lowerC)) {
            res += '.';
            res += lowerC;
        }
    }

    cout << res << "\n";
    return 0;
}

