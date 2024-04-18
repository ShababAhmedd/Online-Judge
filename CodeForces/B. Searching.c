#include <stdio.h>

int main(){

    int n, i, j, k, x, ans;

    scanf("%d", &n);
    int a[n];

    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    ans = -1;
    scanf("%d", &x);
    for (j=0; j<n; j++){
        if (a[j] == x){
            ans = j;
            break;
        }
    }

    printf("%d", ans);

    return 0;
}


// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B
