#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {
    ifstream in("DATA.in"); // Mo file DATA.in
    map<int, int> freq;     // Luu tan suat xuat hien cua moi so

    int x;
    while (in >> x) {
        if (x < 1000) {
            freq[x]++;
        }
    }

    for (auto it : freq) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}

