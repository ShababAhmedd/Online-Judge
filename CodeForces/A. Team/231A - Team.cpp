#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int n, a, b, c, total = 0;
	cin >> n;
 
	while (n--)
	{
		cin >> a >> b >> c;
		if (a + b + c >= 2) {
			total += 1;
		}
 
	}
 
	cout << total << endl;
 
	return 0;
}
