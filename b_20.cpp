#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct ThiSinh {
    string hoTen;
    string ngaySinh;
    float diem1, diem2, diem3;
    float tongDiem;
};

int main() {
    ThiSinh ts;

    getline(cin, ts.hoTen);

    getline(cin, ts.ngaySinh);

    cin >> ts.diem1 >> ts.diem2 >> ts.diem3;

    // Tinh tong diem
    ts.tongDiem = ts.diem1 + ts.diem2 + ts.diem3;

    // In kq
    cout << ts.hoTen << " " << ts.ngaySinh << " ";
    cout << fixed << setprecision(1) << ts.tongDiem << "\n";

    return 0;
}

