#include <stdio.h>
 
int main() {
    int A, B, C, max, min;
    scanf("%d %d %d", &A, &B, &C);
 
    // finding max
    if (A>=B && A>=C){
        max = A;
    }
    else if (B>=A && B>=C){
        max = B;
    }
    else if (C>=A && C>=B){
        max = C;
    }
 
    // finding min
    if (A<=B && A<=C){
        min = A;
    }
    else if (B<=A && B<=C){
        min = B;
    }
    else if (C<=A && C<=B){
        min = C;
    }
 
    printf("%d %d", min, max);
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
