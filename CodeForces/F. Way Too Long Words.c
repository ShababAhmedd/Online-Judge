#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++){
        char s[101];
        scanf("%s", s);
        int len = strlen(s);

        if(len>10){
            printf("%c", s[0]);
            printf("%d", len-2);
            printf("%c\n", s[len-1]);
            }
        else{
            printf("%s\n", s);
            }
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
