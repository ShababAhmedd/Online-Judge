#include <stdio.h>

int main(){

    int n, i, num, remainder;
    scanf("%d", &n);

    for (i=1; i<=n; i++){
        scanf("%d", &num);
        while(1){
            remainder = num % 10;
            printf("%d ", remainder);
            num = num / 10;
            if (num==0){
                printf("\n");
                break;
            }
        }
    }

    return 0;
}
