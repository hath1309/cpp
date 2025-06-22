#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Ham tim do dai xau con co the loai bo nhieu nhat co dang "100"
int findMaxRemovedLength(const string &s) {
    string stk;
    for (char c : s) {
        stk += c;
        // Neu cuoi stack co "100" thi xoa 3 ky tu
        while (stk.size() >= 3 && stk.substr(stk.size() - 3) == "100") {
            stk.erase(stk.end() - 3, stk.end());
        }
    }
    return s.size() - stk.size(); // Do dai da loai bo
}

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Bo qua ky tu xuong dong sau khi doc so T

    vector<string> tests(T);
    for (int i = 0; i < T; ++i) {
        getline(cin, tests[i]); // Doc tung xau S
    }

    // Xu ly toan bo sau khi da nhap xong
    for (const string &s : tests) {
        cout << findMaxRemovedLength(s) << endl;
    }

    return 0;
}

