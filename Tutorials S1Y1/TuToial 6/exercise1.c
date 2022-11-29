
//A)

#include<stdio.h>
int main(void){

    int i,j,mark[10];

    for(i =1; i<=10 ; i++){

        printf("Enter marks: ");
        scanf("%d",&mark[i-1]);
    }

   for(j =1; j<=10;j++){

        printf("%d\n",mark[j-1]);
   }

    return 0;
}