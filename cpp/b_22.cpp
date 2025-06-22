#include <iostream>
using namespace std;

class PhanSo {
private:
    unsigned long long tu, mau;

    // Ham tinh UCLN (Greatest Common Divisor)
    unsigned long long gcd(unsigned long long a, unsigned long long b) {
        while (b != 0) {
            unsigned long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    void nhap() {
        cin >> tu >> mau;
    }

    void toiGian() {
        unsigned long long u = gcd(tu, mau);
        tu /= u;
        mau /= u;
    }

    void in() {
        cout << tu << "/" << mau << "\n";
    }
};

int main() {
    PhanSo ps;
    ps.nhap();
    ps.toiGian();
    ps.in();

    return 0;
}

