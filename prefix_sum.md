### Range sum query  `O(qn)`
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++) {    // O(n)
        cin >> a[i];
    }

    while (q--) {    // O(q)
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sum = 0;
        for (int i = l; i <= r; i++) {    // O(n)
            sum += a[i];
        }
        cout << sum << endl;
    }

    return 0;
}
```


### Prefix sum array `O(q)`
```C++
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    int a[n];
    for (int i = 0; i < n; i++) {    // O(n)
        cin >> a[i];
    }

    // Generating prefix sum array
    long long pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++) {    // O(n)
        pre[i] = a[i] + pre[i - 1];
    }

    while (q--) {    // O(q)
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

## Problem Statement
Given two numbers `N` and `Q`, an array `A` of `N` numbers and `Q` number of pairs `(L, R)`. For each query, print a single line that contains the summation of all numbers from index `L` to index `R`.

### Input
- The first line contains two integers `N`, `Q` (`1 ≤ N, Q ≤ 10^5`) where:
  - `N` is the number of elements in array `A`.
  - `Q` is the number of query pairs.
  
- The second line contains `N` integers (`1 ≤ A[i] ≤ 10^9`), the elements of array `A`.

- The next `Q` lines each contain two integers `L, R` (`1 ≤ L ≤ R ≤ N`), representing the range for the sum query.

### Output
For each query, print a single line that contains the summation of all numbers from index `L` to index `R`.

### Example Input
#### Example 1:
```
6 3
6 4 2 7 2 7
1 3
3 6
1 6
```
#### Example Output 1:
```
12
18
28
```

#### Example 2:
```
4 3
5 5 2 3
1 3
2 3
1 4
```
#### Example Output 2:
```
12
7
15
```
