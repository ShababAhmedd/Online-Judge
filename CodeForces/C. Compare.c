#include<stdio.h>
#include<string.h>

int main(){
    char x[21], y[21];
    scanf("%s", &x);
    scanf("%s", &y);

    int result = strcmp(x, y);
    if (result<0){
        printf("%s", x);
    }
    else if(result>0){
        printf("%s", y);
    }
    else{
        printf("%s", x);
    }
    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/C
