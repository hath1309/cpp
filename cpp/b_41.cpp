#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

class NhanVien {
private:
    static int count;  // bi?n d?m t? d?ng tang
    string maNV;
public:
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHD;

    NhanVien() {
        count++;
        maNV = "00000" + to_string(count);
        maNV = maNV.substr(maNV.size() - 5);  // L?y 5 k� t? cu?i
    }

    friend istream& operator>>(istream& is, NhanVien& nv);
    friend ostream& operator<<(ostream& os, const NhanVien& nv);
};

int NhanVien::count = 0;

// Nh?p th�ng tin nh�n vi�n (kh�ng nh?p m�)
istream& operator>>(istream& is, NhanVien& nv) {
    getline(is, nv.hoTen);
    getline(is, nv.gioiTinh);
    getline(is, nv.ngaySinh);
    getline(is, nv.diaChi);
    getline(is, nv.maSoThue);
    getline(is, nv.ngayKyHD);
    return is;
}

// Xu?t th�ng tin nh�n vi�n d?y d?, c�c tru?ng c�ch nhau 1 d?u c�ch
ostream& operator<<(ostream& os, const NhanVien& nv) {
    os << nv.maNV << " " << nv.hoTen << " " << nv.gioiTinh << " "
       << nv.ngaySinh << " " << nv.diaChi << " " << nv.maSoThue << " " << nv.ngayKyHD;
    return os;
}

int main() {
    int n; 
    cin >> n;
    cin.ignore();  // X? l� newline sau khi d?c s?

    vector<NhanVien> ds(n);
    for (int i = 0; i < n; i++) {
        cin >> ds[i];
    }

    for (const auto& nv : ds) {
        cout << nv << "\n";
    }

    return 0;
}

