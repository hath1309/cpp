#include <iostream>
#include <vector>
using namespace std;

void transformMatrix(vector<vector<int>>& mat, int n, int m) {
    vector<int> row(n, 0); // danh dau cac hang co 1
    vector<int> col(m, 0); // danh dau cac cot co 1

    // Buoc 1: danh dau cac hang va cot co gia tri 1
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (mat[i][j] == 1) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Buoc 2: cap nhat lai ma tran theo danh dau
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (row[i] == 1 || col[j] == 1) {
                mat[i][j] = 1;
            }
        }
    }
}

int main() {
    int T;
    cin >> T; // so bo test

    while (T--) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> A(N, vector<int>(M));

        // Doc ma tran
        for (int i = 0; i < N; ++i)
            for (int j = 0; j < M; ++j)
                cin >> A[i][j];

        // Xu ly ma tran
        transformMatrix(A, N, M);

        // In ket qua
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j)
                cout << A[i][j] << " ";
            cout << "\n";
        }
    }

    return 0;
}

