#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int s=n-1;  //space
    int k=1;    // star
    for(int i=0; i<n; i++){     // this loop controls the number of lines
        for(int j=0; j<s; j++){     // this loop prints space.
            printf(" ");
        }
        for(int j=0; j<k; j++){     // this loop prints star.
            printf("*");
        }
        printf("\n");
        s--;
        k+=2;
    }

    return 0;
}
