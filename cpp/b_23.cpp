#include <iostream>
using namespace std;

class PhanSo {
private:
    long long tu, mau;

    long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    PhanSo() : tu(0), mau(1) {}
    PhanSo(long long t, long long m) : tu(t), mau(m) {}

    void nhap() {
        cin >> tu >> mau;
    }

    void toiGian() {
        long long u = gcd(tu, mau);
        tu /= u;
        mau /= u;

        if (mau < 0) {
            mau = -mau;
            tu = -tu;
        }
    }

    PhanSo operator+(const PhanSo& other) {
        long long t = tu * other.mau + other.tu * mau;
        long long m = mau * other.mau;
        PhanSo ketQua(t, m);
        ketQua.toiGian();
        return ketQua;
    }

    void in() {
        cout << tu << "/" << mau << "\n";
    }
};

int main() {
    PhanSo p, q;
    p.nhap();
    q.nhap();

    PhanSo tong = p + q;
    tong.in();

    return 0;
}

