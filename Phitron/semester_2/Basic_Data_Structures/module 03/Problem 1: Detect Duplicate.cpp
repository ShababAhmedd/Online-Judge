#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {   // O(n)
        cin >> arr[i];
    }

    int x;
    cin >> x;
    bool flag = false;
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == x) {
            if (mid > 0 && arr[mid - 1] == x) {
                flag = true;
                break;
            }
            if (mid < n - 1 && arr[mid + 1] == x) {
                flag = true;
                break;
            }
        }
        if (x > arr[mid]) l = mid + 1;
        if (x < arr[mid]) r = mid - 1;
    }
    if (flag == true) cout << "true";
    else cout << "false";



    return 0;
}

