#include <iostream>
#include <string>
using namespace std;

struct NhanVien {
    string maNV = "00001";  
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHopDong;
};

int main() {
    NhanVien nv;

    // Nhap du lieu
    getline(cin, nv.hoTen);
    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    getline(cin, nv.maSoThue);
    getline(cin, nv.ngayKyHopDong);

    // In ra 1 dong, cac thong tin cach nhau 1 khoang trang
    cout << nv.maNV << " "
         << nv.hoTen << " "
         << nv.gioiTinh << " "
         << nv.ngaySinh << " "
         << nv.diaChi << " "
         << nv.maSoThue << " "
         << nv.ngayKyHopDong << "\n";

    return 0;
}

