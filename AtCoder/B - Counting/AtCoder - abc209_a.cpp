#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, B; cin >> A >> B;
	if (A <= B) {
		cout << B - A + 1 << '\n';
	}
	else {
		cout << 0 << '\n';
	}
	return 0;
}