#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1e6 + 2; // so duong nho nhat co the la n+1

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<bool> appear(MAX, false); // danh dau so da xuat hien

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x > 0 && x < MAX) {
                appear[x] = true;
            }
        }

        // tim so duong nho nhat chua xuat hien
        for (int i = 1; i < MAX; ++i) {
            if (!appear[i]) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}

