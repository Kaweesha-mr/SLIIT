#include<stdio.h>

int main(void){
    char a;
    int value[] = {19,3,15,7,11,9,13,5,17,1};
    int i,j,count =0;

    printf("Element\t\tvalue\t\tHistogram");
    for (i = 0;i<10;i++){

        //code used to print the value
        printf("\n%d\t\t%d\t\t",count,value[i]);

        //code used to print the histogram
        for(j=1;j <= value[i];j++){
            printf("*");
        }

        count = count+1;
    }

    
    return 0;
}