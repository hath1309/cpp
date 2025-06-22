#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // so bo test

    while (T--) {
        int N;
        cin >> N;

        int A[100][100]; // Ma tran kich thuoc toi da 100x100

        // Doc N*N phan tu
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < N; ++j)
                cin >> A[i][j];

        // Duyet va in cac phan tu thuoc bien
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < N; ++j) {
                // Neu phan tu o hang dau, hang cuoi, cot dau, hoac cot cuoi
                if (i == 0 || i == N - 1 || j == 0 || j == N - 1)
                    cout << A[i][j] << " ";
                else
                    cout << "  "; // Bo trong cac phan tu khong thuoc bien
            }
            cout << "\n";
        }
    }

    return 0;
}

