#include <stdio.h>

int main(){

    int n, rem, div, checker1, checker2;
    scanf("%d", &n);

    rem = n%10;
    div = n/10;
    checker1 = rem%div;
    checker2 = div%rem;
    
    if (checker1==0 || checker2==0){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I
