#include <iostream>
#include <vector>
#include <algorithm>
#include <climits> 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // sap xep day so
        sort(A.begin(), A.end());

        // tim chen lech nho nhat giua hai phan tu lien ke
        int min_diff = INT_MAX;
        for (int i = 1; i < N; ++i) {
            min_diff = min(min_diff, A[i] - A[i - 1]);
        }

        cout << min_diff << "\n";
    }

    return 0;
}

