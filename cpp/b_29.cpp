#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; cin >> T;
    cin.ignore(); // bo dong xuong hang sau khi doc T

    while(T--) {
        string s; 
        getline(cin, s);

        long long sum = 0;
        long long current_num = 0;
        bool in_number = false;

        for(char c : s) {
            if(c >= '0' && c <= '9') {
                current_num = current_num * 10 + (c - '0');
                in_number = true;
            } else {
                if(in_number) {
                    sum += current_num;
                    current_num = 0;
                    in_number = false;
                }
            }
        }

        // neu ket thuc xau van con so dang gom
        if(in_number) sum += current_num;

        cout << sum << "\n";
    }

    return 0;
}

