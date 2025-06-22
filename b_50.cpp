#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <algorithm>

using namespace std;

// Ham doc tu trong file 
set<string> doc_file(const string& ten_file) {
    ifstream in(ten_file);
    set<string> tap_tu;
    string line, word;

    while (getline(in, line)) {
        stringstream ss(line);
        while (ss >> word) {
            transform(word.begin(), word.end(), word.begin(), ::tolower); // Chu thuong
            tap_tu.insert(word);
        }
    }

    return tap_tu;
}

int main() {
    set<string> tap1 = doc_file("DATA1.in");
    set<string> tap2 = doc_file("DATA2.in");


    set<string> hop;
    set_union(tap1.begin(), tap1.end(),
              tap2.begin(), tap2.end(),
              inserter(hop, hop.begin()));


    set<string> giao;
    set_intersection(tap1.begin(), tap1.end(),
                     tap2.begin(), tap2.end(),
                     inserter(giao, giao.begin()));

    for (const string& tu : hop) cout << tu << " ";
    cout << endl;

    for (const string& tu : giao) cout << tu << " ";
    cout << endl;

    return 0;
}

