#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string s; 
        getline(cin, s);

        string letters;
        int sum_digits = 0;

        for(char c : s) {
            if(c >= 'A' && c <= 'Z') {
                letters.push_back(c);
            } else if(c >= '0' && c <= '9') {
                sum_digits += (c - '0');
            }
        }

        sort(letters.begin(), letters.end());

        cout << letters << sum_digits << "\n";
    }

    return 0;
}

