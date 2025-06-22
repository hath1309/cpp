#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct SinhVien {
    string ma, hoten, lop, email;
};

// Hàm so sánh theo mã sinh viên
bool soSanhMa(const SinhVien &a, const SinhVien &b) {
    return a.ma < b.ma;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // b? ký t? '\n' sau khi nh?p s? lu?ng

    vector<SinhVien> ds(n);
    for (int i = 0; i < n; ++i) {
        getline(cin, ds[i].ma);
        getline(cin, ds[i].hoten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].email);
    }


    sort(ds.begin(), ds.end(), soSanhMa);

    // In danh sách dã s?p x?p
    for (const SinhVien &sv : ds) {
        cout << sv.ma << " " << sv.hoten << " " << sv.lop << " " << sv.email << endl;
    }

    return 0;
}

