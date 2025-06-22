#include <iostream>
#include <vector>
using namespace std;

int main() {
    
	int t;
	
	do{
		cout<< "Nhap input N (N<= 20):\n";
		cin >> t; 
	}
    while (t > 20);
    
	double result = 0;
	double temp = 1;
    for (int i = 1; i <= t; ++i) {
        temp *= i;
        result += temp;
    }
    cout << "INPUT\tOUTPUT\n";
    cout << t << "\t" << result << endl;

    return 0;
}
