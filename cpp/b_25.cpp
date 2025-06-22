#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T; 
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> A(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> A[i][j];


        vector<vector<int>> B(m, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                B[j][n - 1 - i] = A[i][j];
            }
        }


        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << B[i][j];
                if (i != m - 1 || j != n - 1) cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

