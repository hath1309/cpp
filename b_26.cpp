#include <iostream>
#include <vector>
using namespace std;

int minMergeToPalindrome(vector<int> &A) {
    int i = 0, j = (int)A.size() - 1;
    int count = 0;
    while (i < j) {
        if (A[i] == A[j]) {
            i++;
            j--;
        } else if (A[i] < A[j]) {
            A[i + 1] += A[i];
            i++;
            count++;
        } else { // A[i] > A[j]
            A[j - 1] += A[j];
            j--;
            count++;
        }
    }
    return count;
}

int main() {
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<int> A(n);
        for (int &x : A) cin >> x;
        cout << minMergeToPalindrome(A) << "\n";
    }
    return 0;
}

