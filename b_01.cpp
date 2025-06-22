#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; 
    vector<long long> input(t);


    for (int i = 0; i < t; ++i) {
        cin >> input[i];
    }


    cout << "INPUT\tOUTPUT\n";
    for (int i = 0; i < t; ++i) {
        long long n = input[i];
        cout << input[i] << "\t" << (n * (n + 1) / 2) << endl;
    }

    return 0;
}
