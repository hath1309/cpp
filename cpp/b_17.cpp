#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // Loai bo ky tu xuong dong sau cin

    while (T--) {
        string S;
        getline(cin, S);

        vector<int> cnt(26, 0); // Dem tan suat cac ky tu

        for (char c : S) {
            cnt[c - 'a']++;
        }

        long long res = 0;
        for (int i = 0; i < 26; ++i) {
            res += cnt[i]; // xau con do dai 1
            res += 1LL * cnt[i] * (cnt[i] - 1) / 2; // xau con do dai >= 2
        }

        cout << res << "\n";
    }

    return 0;
}

