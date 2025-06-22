#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];       // Mang A[] co toi da 100 phan tu
    int cnt[1001] = {}; // Mang dem danh dau cac so tu 1 den 1000

    // Doc day so
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        cnt[a[i]] = 1; // Danh dau so da xuat hien
    }

    // Liet ke cac so khac nhau theo thu tu tang dan
    for (int i = 1; i <= 1000; ++i) {
        if (cnt[i])
            cout << i << " ";
    }

    return 0;
}

