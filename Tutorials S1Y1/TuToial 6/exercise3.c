#include<stdio.h>

int main(void){

int i,j,motion[5];
    for(i =1;i<=5;i++){

        printf("Enter Value: ");
        scanf(" %d",&motion[5-i]);
    }
    for(j =1; j<=5;j++){

    printf("%d\t",motion[j-1]);
}

    return 0;
}