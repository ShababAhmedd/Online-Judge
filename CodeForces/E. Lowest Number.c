#include <stdio.h>
#include <limits.h>

int main(){

    int n, i, j, lowest, idx;

    scanf("%d", &n);
    int a[n];
    // taking elements in the array.
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    lowest = INT_MAX;
    idx = 0;
    for (j=0; j<n; j++){
        if (a[j]<lowest){
            lowest = a[j];
            idx = j+1;
        }
    }
    printf("%d %d", lowest, idx);

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E
