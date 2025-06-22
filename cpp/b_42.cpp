#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct SinhVien {
    string ma;
    string hoten;
    string lop;
    string email;
};

int main() {
    int n; 
    cin >> n;
    cin.ignore(); // x? lý newline sau s?

    vector<SinhVien> ds(n);

    for (int i = 0; i < n; i++) {
        getline(cin, ds[i].ma);
        getline(cin, ds[i].hoten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].email);
    }

    // S?p x?p theo l?p tang d?n, n?u l?p trùng thì theo mã tang d?n
    sort(ds.begin(), ds.end(), [](const SinhVien &a, const SinhVien &b) {
        if (a.lop != b.lop) 
            return a.lop < b.lop;
        return a.ma < b.ma;
    });

    // In ra k?t qu?
    for (const auto &sv : ds) {
        cout << sv.ma << " " << sv.hoten << " " << sv.lop << " " << sv.email << "\n";
    }

    return 0;
}

