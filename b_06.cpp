#include <iostream>
#include <cmath>
using namespace std;

bool la_nguyen_to(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    int limit = (int) sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);

    bool first = true;
    for (int num = a; num <= b; ++num) {
        if (la_nguyen_to(num)) {
            if (!first) cout << " ";
            cout << num;
            first = false;
        }
    }
    cout << "\n";
    return 0;
}

