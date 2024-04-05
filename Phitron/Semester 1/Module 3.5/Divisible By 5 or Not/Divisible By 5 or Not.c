#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num, i;
    scanf("%d", &num);
    for (i=1; i<=num; i++){
        if (i % 5 == 0){
            printf("%d Yes \n", i);
        }
        else{
            printf("%d No \n", i);
        }
        
    }
    return 0;
}
