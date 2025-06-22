#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using ll = long long;

vector<ll> uoc_nguyen_to(ll n) {
    vector<ll> factors;
    // kiem tra 2 rieng
    if (n % 2 == 0) {
        factors.push_back(2);
        while (n % 2 == 0) n /= 2;
    }

    // kiem tra cac so le tu 3 den sqrt(n)
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            factors.push_back(i);
            while (n % i == 0) n /= i;
        }
    }

    // neu con so lon hon 1 thi do la so nguyen to
    if (n > 1) {
        factors.push_back(n);
    }

    return factors;
}

int main() {
    int T; cin >> T;
    vector<int> inputs; // luu input
    while (T--) {
        ll N; cin >> N;
        inputs.push_back(N);
    }
    for(auto i: inputs){
    	vector<ll> res = uoc_nguyen_to(i);
		cout << i << "\t";
        for (size_t i = 0; i < res.size(); ++i) {
            cout << res[i];
            if (i != res.size() - 1) cout << " ";
        }
        cout << "\n";
	}
    
    return 0;
}

