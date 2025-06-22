#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T; // nhap so bo test
    while (T--) {
        int n, m;
        cin >> n >> m; // nhap kich thuoc 2 mang
        vector<int> A(n), B(m);

        for (int &x : A) cin >> x; // nhap mang A
        for (int &x : B) cin >> x; // nhap mang B

        // su dung set de luu phan tu khong trung lap
        set<int> setA(A.begin(), A.end());
        set<int> setB(B.begin(), B.end());

        vector<int> UnionArr, InterArr;

        // tim giao cua 2 set
        for (int x : setA) {
            if (setB.count(x)) InterArr.push_back(x);
        }

        // tim hop cua 2 set
        UnionArr.assign(setA.begin(), setA.end());
        for (int x : setB) {
            if (!setA.count(x)) UnionArr.push_back(x);
        }

        // sap xep mang hop va giao
        sort(UnionArr.begin(), UnionArr.end());
        sort(InterArr.begin(), InterArr.end());

        // in mang hop
        for (int x : UnionArr) cout << x << " ";
        cout << "\n";

        // in mang giao
        for (int x : InterArr) cout << x << " ";
        cout << "\n";
    }

    return 0;
}

