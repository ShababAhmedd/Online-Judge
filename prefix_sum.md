### Range sum query  `O(qn)`
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sum = 0;
        for (int i = l; i <= r; i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}
```


### Prefix sum array
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Generating prefix sum array
    long long pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {
        pre[i] = a[i] + pre[i - 1];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        long long sum = 0;
        if (l == 0) sum = pre[r];
        else sum = pre[r] - pre[l - 1];
        cout << sum << endl;
    }

    return 0;
}
```
