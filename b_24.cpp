#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("PTIT.in");
    ofstream fout("PTIT.out");

    if (!fin.is_open()) {
        cerr << "Khong mo duoc tep PTIT.in\n";
        return 1;
    }

    if (!fout.is_open()) {
        cerr << "Khong mo duoc tep PTIT.out\n";
        return 1;
    }

    string line;
    while (getline(fin, line)) {
        fout << line << '\n';
    }

    fin.close();
    fout.close();

    return 0;
}

