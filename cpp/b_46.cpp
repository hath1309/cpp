#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct DoanhNghiep {
    string ma;
    string ten;
    int soLuong;
};

// so sanh de sap xep: so luong giam dan, neu bang thi theo ma tang dan
bool cmp(const DoanhNghiep &a, const DoanhNghiep &b) {
    if (a.soLuong != b.soLuong) return a.soLuong > b.soLuong;
    return a.ma < b.ma;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<DoanhNghiep> ds(n);
    for (int i = 0; i < n; ++i) {
        getline(cin, ds[i].ma);
        getline(cin, ds[i].ten);
        cin >> ds[i].soLuong;
        cin.ignore();
    }

    // Sap xep danh sach theo tieu chi
    sort(ds.begin(), ds.end(), cmp);

    // In ket qua
    for (const auto &dn : ds) {
        cout << dn.ma << " " << dn.ten << " " << dn.soLuong << endl;
    }

    return 0;
}

