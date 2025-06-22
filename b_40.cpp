#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Nguoi {
    string ten;
    int ngay, thang, nam;
};

// Ham so sanh hai nguoi, true neu a tre hon b
bool treHon(const Nguoi &a, const Nguoi &b) {
    if (a.nam != b.nam) return a.nam > b.nam;   // Nam lon hon tuc la tre hon
    if (a.thang != b.thang) return a.thang > b.thang; // Thang lon hon tuc la tre hon
    return a.ngay > b.ngay;  // Ngay lon hon tuc la tre hon
}

int main() {
    int n;
    cin >> n;

    vector<Nguoi> ds(n);

    for (int i = 0; i < n; ++i) {
        string date;
        cin >> ds[i].ten >> date;

        // Tach ngay thang nam tu chuoi ngay/thang/nam
        ds[i].ngay = stoi(date.substr(0, 2));
        ds[i].thang = stoi(date.substr(3, 2));
        ds[i].nam = stoi(date.substr(6, 4));
    }

    // Tim nguoi tre nhat
    Nguoi tre_nhat = *min_element(ds.begin(), ds.end(), treHon);
    // Tim nguoi gia nhat
    Nguoi gia_nhat = *max_element(ds.begin(), ds.end(), treHon); 

    cout << tre_nhat.ten << endl;
    cout << gia_nhat.ten << endl;

    return 0;
}

