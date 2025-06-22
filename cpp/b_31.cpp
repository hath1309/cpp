#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T; // nhap so bo test
    while (T--) {
        int n, m;
        cin >> n >> m; // nhap so phan tu cua mang A va B
        vector<int> A(n), B(m);
        for (int &x : A) cin >> x; // nhap mang A
        for (int &x : B) cin >> x; // nhap mang B

        vector<int> UnionArr, InterArr; // khai bao mang hop va mang giao

        int i = 0, j = 0;
        while (i < n && j < m) {
            if (A[i] == B[j]) {
                UnionArr.push_back(A[i]); // them vao mang hop
                InterArr.push_back(A[i]); // them vao mang giao
                i++; j++;
            } else if (A[i] < B[j]) {
                UnionArr.push_back(A[i]); // them vao mang hop
                i++;
            } else {
                UnionArr.push_back(B[j]); // them vao mang hop
                j++;
            }
        }
        while (i < n) {
            UnionArr.push_back(A[i++]); // them phan con lai cua A vao hop
        }
        while (j < m) {
            UnionArr.push_back(B[j++]); // them phan con lai cua B vao hop
        }

        for (int x : UnionArr) cout << x << " "; // in mang hop
        cout << "\n";
        for (int x : InterArr) cout << x << " "; // in mang giao
        cout << "\n";
    }

    return 0;
}

