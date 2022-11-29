

#include<stdio.h>
int main(void){
int i,j,mark[10],marks=0;

for(i =1; i<=10 ; i++){

    printf("Enter marks: ");
    scanf("%d",&marks);
    if (0 < marks && marks < 20){
            mark[i-1] = marks;
        }
    }

for(j =1; j<=10;j++){

    printf("%d\n",mark[j-1]);
}

    return 0;
}
