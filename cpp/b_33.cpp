#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T; // so bo test
    while (T--) {
        int n; cin >> n; // so phan tu mang
        vector<int> A(n);
        for (int &x : A) cin >> x; // nhap mang

        sort(A.begin(), A.end()); // sap xep tang dan

        vector<int> res(n);
        int left = 0; // chi so cho phan tu nho
        int right = n - 1; // chi so cho phan tu lon

        // chen lan luot phan tu lon va nho vao mang ket qua
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                res[i] = A[right--]; // vi tri chan lay phan tu lon
            } else {
                res[i] = A[left++]; // vi tri le lay phan tu nho
            }
        }

        // in ket qua
        for (int x : res) cout << x << ' ';
        cout << '\n';
    }

    return 0;
}

