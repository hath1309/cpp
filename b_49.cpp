#include <iostream>
#include <fstream>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    ifstream in("VANBAN.in"); // Mo file VANBAN.in
    set<string> tu_khac_nhau; // Luu cac tu khac nhau, tu dong sap xep theo tu dien

    string line;
    while (getline(in, line)) {
        stringstream ss(line); // Tach dong thanh cac tu
        string word;
        while (ss >> word) {
            // Chuyen tat ca ve chu thuong
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            tu_khac_nhau.insert(word);
        }
    }

    for (const string& word : tu_khac_nhau) {
        cout << word << endl;
    }

    return 0;
}

