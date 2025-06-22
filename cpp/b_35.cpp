#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    string maSV, hoTen, lop, ngaySinh;
    float GPA;
};

// Ham chuan hoa ho ten: viet hoa chu cai dau, con lai viet thuong
string chuanHoaHoTen(string s) {
    stringstream ss(s);
    string tmp, res = "";
    while(ss >> tmp) {
        tmp[0] = toupper(tmp[0]);
        for(int i = 1; i < (int)tmp.size(); i++)
            tmp[i] = tolower(tmp[i]);
        res += tmp + " ";
    }
    res.pop_back(); // xoa khoang trang cuoi
    return res;
}

// Ham chuan hoa ngay sinh dd/mm/yyyy
string chuanHoaNgaySinh(string s) {
    if (s[1] == '/') s = "0" + s;          // neu ngay chi co 1 chu so, them 0 vao dau
    if (s[4] == '/') s.insert(3, "0");     // neu thang chi co 1 chu so, them 0 vao dau
    return s;
}

int main() {
    int N; cin >> N;
    cin.ignore();
    vector<SinhVien> ds(N);
    for(int i = 0; i < N; i++) {
        // Ma sinh vien tu dong tao
        char buf[15];
        sprintf(buf, "B20DCCN%03d", i + 1);
        ds[i].maSV = string(buf);
        
        getline(cin, ds[i].hoTen);
        ds[i].hoTen = chuanHoaHoTen(ds[i].hoTen);
        
        getline(cin, ds[i].lop);
        
        getline(cin, ds[i].ngaySinh);
        ds[i].ngaySinh = chuanHoaNgaySinh(ds[i].ngaySinh);
        
        cin >> ds[i].GPA;
        cin.ignore();
    }
    
    for(int i = 0; i < N; i++) {
        cout << ds[i].maSV << " " << ds[i].hoTen << " " << ds[i].lop << " " << ds[i].ngaySinh << " ";
        cout << fixed << setprecision(2) << ds[i].GPA << "\n";
    }
    
    return 0;
}

