#include <stdio.h>

int main(){

    int n, i, j, k;

    scanf("%d", &n);
    int a[n];
    // taking elements in the array.
    for (i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    // Replacing the +ve values of array with 1 and the -ves with 2.
    for (j=0; j<n; j++){
        if(a[j]>0){
            a[j] = 1;
        }
        if (a[j]<0){
            a[j] = 2;
        }
    }

    // printing the array.
    for (k=0; k<n; k++){
        printf("%d ", a[k]);
    }



    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C
