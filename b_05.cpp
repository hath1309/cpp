#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<int> results; // luu ket qua

    for (int i = 0; i < t; ++i) {
        string s;
        cin >> s;
        int len = s.length();

        if (len >= 2 && s[len - 2] == '8' && s[len - 1] == '6') {
            results.push_back(1);
        } else {
            results.push_back(0);
        }
    }

    // in ket qua sau khi da doc het input
    for (int res : results) {
        cout << res << "\n";
    }

    return 0;
}

