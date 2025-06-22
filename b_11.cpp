#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = d; i < n; ++i) {
            cout << a[i] << " ";
        }
        for (int i = 0; i < d; ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}

