#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    if (num == 0){
        printf("zero \n");
    }
    else if (num > 0){
        printf("positive \n");
    }
    else{
        printf("negative \n");
    }

    return 0;
}
