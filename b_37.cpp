#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int dem = 1;

struct NhanVien {
    string maNV, hoTen, gioiTinh, ngaySinh, diaChi, maSoThue, ngayKyHD;
};

string chuanHoaNgay(string s) {
    stringstream ss(s);
    string d, m, y;
    getline(ss, d, '/');
    getline(ss, m, '/');
    getline(ss, y);
    if (d.size() == 1) d = "0" + d;
    if (m.size() == 1) m = "0" + m;
    return d + "/" + m + "/" + y;
}

string taoMa(int n) {
    stringstream ss;
    ss << setw(5) << setfill('0') << n;
    return ss.str();
}

bool soSanhNgay(const NhanVien &a, const NhanVien &b) {
    string na = a.ngaySinh.substr(6, 4) + a.ngaySinh.substr(3, 2) + a.ngaySinh.substr(0, 2);
    string nb = b.ngaySinh.substr(6, 4) + b.ngaySinh.substr(3, 2) + b.ngaySinh.substr(0, 2);
    return na < nb;
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    vector<NhanVien> ds;

    for (int i = 0; i < N; ++i) {
        NhanVien nv;
        nv.maNV = taoMa(dem++);
        getline(cin, nv.hoTen);
        getline(cin, nv.gioiTinh);
        getline(cin, nv.ngaySinh);
        getline(cin, nv.diaChi);
        getline(cin, nv.maSoThue);
        getline(cin, nv.ngayKyHD);
        nv.ngaySinh = chuanHoaNgay(nv.ngaySinh);
        nv.ngayKyHD = chuanHoaNgay(nv.ngayKyHD);
        ds.push_back(nv);
    }

    sort(ds.begin(), ds.end(), soSanhNgay);

    for (const auto &nv : ds) {
        cout << nv.maNV << " " << nv.hoTen << " " << nv.gioiTinh << " "
             << nv.ngaySinh << " " << nv.diaChi << " "
             << nv.maSoThue << " " << nv.ngayKyHD << endl;
    }

    return 0;
}

