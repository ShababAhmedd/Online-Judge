#include <stdio.h>

int main(){
    int n, i, a, even, odd, posi, neg;
    scanf("%d", &n);
 
    i=0;
    even=0;
    odd=0;
    posi=0;
    neg=0;
    while(i<n){
        scanf("%d", &a);
 
        if (a%2==0){
            even++;
        }
 
        if (a%2 != 0){
            odd++;
        }
 
        if (a>0){
            posi++;
        }
 
        if (a<0){
            neg++;
        }
 
        i++;
    }
 
    printf("Even: %d \n", even);
    printf("Odd: %d \n", odd);
    printf("Positive: %d \n", posi);
    printf("Negative: %d \n", neg);
 
    return 0;
}
