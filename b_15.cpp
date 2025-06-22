#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int T;
    cin >> T; // so luong bo test

    while (T--) {
        int N;
        cin >> N;

        unordered_map<int, int> freq;
        int x;

        // dem tan suat
        for (int i = 0; i < N; ++i) {
            cin >> x;
            freq[x]++;
        }

        int res = 0;

        // cong don tat ca cac lan xuat hien cua phan tu lap
        for (auto it : freq) {
            if (it.second >= 2)
                res += it.second;
        }

        cout << res << "\n";
    }

    return 0;
}

