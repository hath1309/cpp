#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

struct GiangVien {
    string ma;
    string ten;
    string boMonVietTat;
};

// Ham viet tat bo mon (vi du: "Cong nghe phan mem" -> "CNPM")
string vietTatBoMon(const string& boMon) {
    stringstream ss(boMon);
    string word, result = "";
    while (ss >> word) {
        result += toupper(word[0]);
    }
    return result;
}

// Chuyen xau ve chu thuong
string toLower(const string& s) {
    string res = s;
    transform(res.begin(), res.end(), res.begin(), ::tolower);
    return res;
}

// Kiem tra xem ten co chua tu khoa hay khong (khong phan biet hoa thuong)
bool chuaTuKhoa(const string& ten, const string& tuKhoa) {
    return toLower(ten).find(toLower(tuKhoa)) != string::npos;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<GiangVien> danhSach;

    for (int i = 1; i <= n; ++i) {
        string ten, boMon;
        getline(cin, ten);
        getline(cin, boMon);

        // Tao ma giang vien (GV01, GV02, ...)
        string ma = string("GV") + (i < 10 ? "0" : "") + to_string(i);
        string vietTat = vietTatBoMon(boMon);

        danhSach.push_back({ma, ten, vietTat});
    }

    int q;
    cin >> q;
    cin.ignore();

    while (q--) {
        string tuKhoa;
        getline(cin, tuKhoa);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << tuKhoa << ":\n";

        // Duyet va in ra cac giang vien thoa man
        for (const auto& gv : danhSach) {
            if (chuaTuKhoa(gv.ten, tuKhoa)) {
                cout << gv.ma << " " << gv.ten << " " << gv.boMonVietTat << endl;
            }
        }
    }

    return 0;
}
