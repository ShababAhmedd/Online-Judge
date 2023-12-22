#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	if (n <= 9) {
		cout << "000" << n << "\n";
	}
	else if (n <= 99) {
		cout << "00" << n << '\n';
	}
	else if (n <= 999) {
		cout << "0" << n << '\n';
	}
	else {
		cout << n << '\n';
	}
	return 0;
}
