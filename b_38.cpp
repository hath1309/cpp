#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct SinhVien {
    string ma, ten, lop;
    float d1, d2, d3;
};

bool soSanhMaSV(const SinhVien &a, const SinhVien &b) {
    return a.ma < b.ma;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<SinhVien> ds(n);

    for (int i = 0; i < n; ++i) {
        getline(cin, ds[i].ma);
        getline(cin, ds[i].ten);
        getline(cin, ds[i].lop);
        cin >> ds[i].d1 >> ds[i].d2 >> ds[i].d3;
        cin.ignore(); // b? dòng th?a sau khi nh?p 3 s?
    }

    sort(ds.begin(), ds.end(), soSanhMaSV);

    for (int i = 0; i < n; ++i) {
        cout << i + 1 << " " << ds[i].ma << " " << ds[i].ten << " "
             << ds[i].lop << " "
             << fixed << setprecision(1)
             << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 << endl;
    }

    return 0;
}

