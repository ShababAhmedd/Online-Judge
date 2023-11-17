#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b; cin >> a >> b;
	int max_coins = a + b;
	max_coins = max(max_coins, a + (a - 1));
	max_coins = max(max_coins, b + (b - 1));
	cout << max_coins << '\n';

	return 0;
}



