#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct SinhVien {
    string ma, ten, lop, email;
};

string getNganh(const string& ma) {
    return ma.substr(3, 4);
}

bool isLopE(const string& lop) {
    return !lop.empty() && lop[0] == 'E';
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
        getline(cin, ds[i].email);
    }

    int q;
    cin >> q;
    cin.ignore();

    while (q--) {
        string nganh;
        getline(cin, nganh);

        string maNganh;
        if (nganh == "Ke toan") maNganh = "DCKT";
        else if (nganh == "Cong nghe thong tin") maNganh = "DCCN";
        else if (nganh == "An toan thong tin") maNganh = "DCAT";
        else if (nganh == "Vien thong") maNganh = "DCVT";
        else if (nganh == "Dien tu") maNganh = "DCDT";

        cout << "DANH SACH SINH VIEN NGANH " << nganh << ":\n";

        for (const auto& sv : ds) {
            string maNganhSV = getNganh(sv.ma);

            if (maNganhSV == maNganh) {
                // Loai cac lop bat dau = 'E' neu la nganh CNTT hoac ATTT
                if ((maNganh == "DCCN" || maNganh == "DCAT") && isLopE(sv.lop)) {
                    continue;
                }
                cout << sv.ma << " " << sv.ten << " " << sv.lop << " " << sv.email << endl;
            }
        }
    }

    return 0;
}

