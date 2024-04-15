#include <stdio.h>

int main(){

    char alpha;
    scanf("%c", &alpha);
    if (alpha != 'z'){
        printf("%c", alpha+1);
    }
    else{
        printf("a");
    }
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C
