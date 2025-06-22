#include <iostream>
#include <vector>
using namespace std;

bool can_bang_chan_le(int num, int N) {
    int chan = 0, le = 0;
    for (int i = 0; i < N; ++i) {
        int digit = num % 10;
        num /= 10;
        if (digit % 2 == 0) chan++;
        else le++;
    }
    return (chan == le);
}

int main() {
    int N;
    cout << "INPUT:\n";
    cin >> N;

    int start = 1;
    for (int i = 1; i < N; ++i) start *= 10; // 10^(N-1)
    int end = start * 10 - 1; // 10^N - 1

    int count_in_line = 0;
	cout << "OUTPUT:\n";
    for (int num = start; num <= end; ++num) {
        if (can_bang_chan_le(num, N)) {
            cout << num << " ";
            count_in_line++;
            if (count_in_line == 10) {
                cout << "\n";
                count_in_line = 0;
            }
        }
    }

    if (count_in_line != 0) cout << "\n";

    return 0;
}

