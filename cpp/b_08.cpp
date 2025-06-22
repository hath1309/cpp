#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> sang(int limit) {
    vector<bool> is_prime(limit + 1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    int T;
    cin >> T;
    vector<int> test_cases(T);
    for (int i = 0; i < T; ++i) {
        cin >> test_cases[i];
    }

    // tim cac so nguyen to p <= sqrt(10^6)
    vector<int> primes = sang(1000); // vi 1000^2 = 10^6
	cout << "INPUT\tOUTPUT\n";
    for (int n : test_cases) {
    	cout << n << "\t";
        for (int p : primes) {
            if (1LL * p * p <= n) {
                cout << p * p << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}

