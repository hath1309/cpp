#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<pair<char,char>> results; // luu cap (input, output)

    for (int i = 0; i < t; ++i) {
        char c;
        cin >> c;
        char res;
        if (c >= 'A' && c <= 'Z') {
            res = c + 32; // hoa -> thuong
        }
        else if (c >= 'a' && c <= 'z') {
            res = c - 32; // thuong -> hoa
        }
        else {
            res = '?'; // neu ko hop le
        }
        results.push_back({c, res});
    }

    // in ket qua
    for (auto &p : results) {
        cout << p.first << "\t" << p.second << "\n";
    }

    return 0;
}

