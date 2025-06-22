#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;

    while (T--) {
        int n; 
        cin >> n;
        unordered_set<int> digits;

        for (int i = 0; i < n; ++i) {
            unsigned long long x;
            cin >> x;

            // Tach tung chu so cua x
            if (x == 0) {
                digits.insert(0);
            } else {
                while (x > 0) {
                    digits.insert(x % 10);
                    x /= 10;
                }
            }
        }

        // Chuyen set sang vector de sap xep
        vector<int> res(digits.begin(), digits.end());
        sort(res.begin(), res.end());

        for (int i = 0; i < (int)res.size(); ++i) {
            if (i > 0) cout << " ";
            cout << res[i];
        }
        cout << "\n";
    }

    return 0;
}

