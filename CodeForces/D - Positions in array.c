#include <stdio.h>

int main(){

    int n, i, j;

    scanf("%d", &n);
    int a[n];
    // taking elements in the array.
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for (j=0; j<n; j++){
        if (a[j]<=10){
            printf("A[%d] = %d \n", j, a[j]);
        }
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D
