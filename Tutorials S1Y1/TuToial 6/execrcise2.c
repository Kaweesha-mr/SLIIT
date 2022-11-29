#include<stdio.h>
int main(void){

    int i,j,mark[10];
    float total,avg;

    for(i =1; i<=10 ; i++){

        printf("Enter marks: ");
        scanf("%d",&mark[i-1]);
    }

   for(j =1; j<=10;j++){
        

        total  = total + mark[j-1];
   }
   avg = total/10;

   printf("%.2f",avg); 

    return 0;
}