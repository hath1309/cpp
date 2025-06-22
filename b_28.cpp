#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    while(T--) {
        string s; cin >> s;
        int n = (int)s.size();
        int i = n - 2;

        // tim vi tri i tu phai sang trai de s[i] > s[j] cho mot j > i
        while(i >= 0) {
            int j = n - 1;
            bool found = false;
            char max_candidate = '0';
            int pos = -1;

            // tim vi tri j phia sau i ma s[j] < s[i], va s[j] lon nhat co the
            for(int k = i+1; k < n; k++) {
                if(s[k] < s[i] && s[k] > max_candidate) {
                    max_candidate = s[k];
                    pos = k;
                    found = true;
                }
            }
            if(found) {
                // doi cho s[i], s[pos]
                swap(s[i], s[pos]);
                cout << s << "\n";
                break;
            }
            i--;
        }
        if(i < 0) cout << "-1\n";
    }
    return 0;
}

