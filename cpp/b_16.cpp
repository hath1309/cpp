#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;

    // Truong hop khong the tao duoc so hop le
    if ((s == 0 && m > 1) || s > 9 * m) {
        cout << "-1 -1\n";
        return 0;
    }

    // Tim so lon nhat
    int sum = s;
    string maxNum = "";
    for (int i = 0; i < m; ++i) {
        int digit = min(9, sum);
        maxNum += (char)(digit + '0');
        sum -= digit;
    }

    // Tim so nho nhat
    sum = s;
    string minNum = "";
    for (int i = 0; i < m; ++i) {
        int digit = max(0, sum - 9 * (m - i - 1));
        if (i == 0 && digit == 0 && m != 1)
            digit = 1;
        minNum += (char)(digit + '0');
        sum -= digit;
    }

    cout << minNum << " " << maxNum << "\n";
    return 0;
}

