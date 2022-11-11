#include<stdio.h>

int main(void){

    int mark=0,total=0,i=1;
    char yes_no;

    do{
        printf("Enter the marks of student %d (between 0 -10)\n",i);

     for(i =1 ; i<=3;i++){
        printf("\n    >mark %d :  ",i);
        scanf("%d",&mark);

        if(!(mark>0 && mark<10)){

            puts("   >Enter a valid mark:");
            break;
        }

        total = total + mark;


    }

    printf("\n   >Total Marks: %d",total);


    printf("\nDo you want to enter mark of another (y/n): ");
    scanf(" %c%*c",&yes_no);

    }while(yes_no == 'Y' || yes_no == 'y');


    return 0;
}