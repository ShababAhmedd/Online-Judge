#include <stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    if (n==1){
        printf("-1");
    }
    else{
        for(i=1; i<=n; i++){
            if (i%2==0){
                printf("%d \n", i);
            }
        }
    }
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B
