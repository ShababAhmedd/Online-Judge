#include<bits/stdc++.h>
using namespace std;

vector<int> prefix_sum(vector<int> arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = arr[i] + prefix[i - 1];
    }
    return prefix;

}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    //for (int x : v) cout << x << " ";

    vector<int> v = prefix_sum(nums);
    for (int x : v) cout << x << " ";

    return 0;
}
