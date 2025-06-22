#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N; cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    for(int i=0; i<N; i++)
        for(int j=0; j<N; j++)
            cin >> A[i][j];

    int M; cin >> M;
    vector<vector<int>> B(M, vector<int>(M));
    for(int i=0; i<M; i++)
        for(int j=0; j<M; j++)
            cin >> B[i][j];

    vector<vector<int>> result(N, vector<int>(N, 0));

    // So luong cua so tren ma tran A
    int count = N / M;

    for(int block_row = 0; block_row < count; block_row++) {
        for(int block_col = 0; block_col < count; block_col++) {
            // Tinh tich chap block (block_row, block_col)
            for(int i=0; i<M; i++) {
                for(int j=0; j<M; j++) {
                    // vi tri tren A tuong ung voi o B[i][j]
                    int valA = A[block_row*M + i][block_col*M + j];
                    result[block_row*M + i][block_col*M + j] = valA * B[i][j];
                }
            }
        }
    }

    // In ket qua
    for(int i=0; i<N; i++) {
        for(int j=0; j<N; j++) {
            cout << result[i][j];
            if(j != N-1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}

