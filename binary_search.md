### Linear search    `O(qn)`
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
        int x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < n; i++) {    // O(n)
            if (a[i] == x) {
                flag = true;
                break;
            }
        }
        if (flag == true) cout << "found" << endl;
        else cout << "not found" << endl;
    }

    return 0;
}
```



# Problem: Number Existence Queries

## Problem Description
You are given:
- Two integers `N` and `Q`.
  - `N`: Number of elements in array `A`.
  - `Q`: Number of queries.
- An array `A` of `N` integers.
- `Q` queries, each containing a number `X`.

For each query, print `"found"` if the number `X` exists in array `A`, otherwise print `"not found"`.

### Input
1. The first line contains two integers `N` and `Q` (`1 ≤ N, Q ≤ 10^5`).
2. The second line contains `N` integers (`1 ≤ A[i] ≤ 10^9`).
3. The next `Q` lines each contain a single integer `X` (`1 ≤ X ≤ 10^9`).

### Output
For each query, print the answer in a single line:
- `"found"` if `X` exists in the array `A`.
- `"not found"` if `X` does not exist in the array.

### Example

#### Input
```
5 3
1 5 4 3 2
5
3
6
```

#### Output
```
found
found
not found
```

### Explanation
- For the first query `X = 5`: `5` is present in the array, so the output is `"found"`.
- For the second query `X = 3`: `3` is present in the array, so the output is `"found"`.
- For the third query `X = 6`: `6` is not present in the array, so the output is `"not found"`.

### Constraints
- `1 ≤ N, Q ≤ 10^5`
- `1 ≤ A[i], X ≤ 10^9`

### Approach
Given the constraints, a linear search for each query would be too slow. Instead, you can optimize the solution by using a set or binary search:
1. Store all elements of array `A` in a set (or sort the array and use binary search).
2. For each query, check if `X` is in the set (or use binary search to check if `X` is present).

This will ensure that each query is processed in logarithmic time, making the solution efficient even for large inputs.
