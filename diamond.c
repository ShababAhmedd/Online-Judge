#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int s=n-1;
    int k=1;
    for(int i=0; i<(2*n)-1; i++){
        for(int j=0; j<s; j++){
            printf(" ");
        }
        for(int j=0; j<k; j++){
            printf("*");
        }
        printf("\n");
        if((i+1)<n){
            s--;
            k+=2;
        }
        else{
            s++;
            k-=2;
        }

    }

    return 0;
}
