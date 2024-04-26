#include <stdio.h>
#include <string.h>

int main() {

    char s[1001];
    scanf("%s", &s);

    int flag=1;
    int s_len=strlen(s);
    int j=s_len-1;
    for(int i=0; i<s_len/2; i++){
        if(s[i]!=s[j]){
            printf("NO\n");
            flag=0;
            break;
        }
        else{
            j--;
        }
    }
    if(flag==1){
        printf("YES");
    }

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
