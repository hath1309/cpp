#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string maSV;
    string hoTen;
    string lop;
    string ngaySinh;
    float diemGPA;
};

// Ham chuan hoa ngay sinh ve dinh dang dd/mm/yyyy
string chuanHoaNgay(string s) {
    // s co the co dang k chuan, vd: 1/2/1999, 01/2/1999, 1/12/1999
    stringstream ss(s);
    string ngay, thang, nam;
    getline(ss, ngay, '/');
    getline(ss, thang, '/');
    getline(ss, nam);

    if (ngay.size() == 1) ngay = "0" + ngay;
    if (thang.size() == 1) thang = "0" + thang;

    return ngay + "/" + thang + "/" + nam;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    cin.ignore();

    vector<SinhVien> ds(N);
    for (int i = 0; i < N; i++) {
        getline(cin, ds[i].hoTen);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ngaySinh);
        cin >> ds[i].diemGPA;
        cin.ignore();

        // Tao ma sinh vien
        // Ma theo format B20DCCN + 3 so tu 001 den 099
        ds[i].maSV = string("B20DCCN") + (i < 9 ? "00" : "0") + to_string(i + 1);

        // Chuan hoa ngay sinh
        ds[i].ngaySinh = chuanHoaNgay(ds[i].ngaySinh);
    }

    // In ket qua
    for (int i = 0; i < N; i++) {
        cout << ds[i].maSV << " " << ds[i].hoTen << " " << ds[i].lop << " "
             << ds[i].ngaySinh << " " << fixed << setprecision(2) << ds[i].diemGPA << "\n";
    }

    return 0;
}

