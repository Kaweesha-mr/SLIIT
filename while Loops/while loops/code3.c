#include<stdio.h>

int main(void){

    int score,count =1;
    char yes_no;
    float total = 0,avg = 0;

    

    do{
        printf("Enter the scores of Player %d(between 0 -4\n",count);
        printf("   >Round 1 - ");
        scanf("%d",&score);
       
        total = total + score;

        if (!(score>0 && score<4)){

            printf("\nEnter a valid score");
            continue;
        }

        printf("   >Round 2 - ");
        scanf("%d",&score);

        total = total + score;

        if (!(score>0 && score<4)){

            printf("\nEnter a valid score");
            continue;
        }

        printf("   >Round 3 - ");
        scanf("%d",&score);

        total = total + score;

        if (!(score > 0 && score < 4)){

            printf("\nEnter a valid score");
            continue;
        }


        avg = total/3;
        printf("Average score - %.2f",avg);

        printf("\nDo you want to enter the scores of another player (y/n) ? ");
        scanf(" %c%*c",&yes_no);

        total = 0;
        count++;
        
    }while(yes_no == 'y' || yes_no == 'Y');

    return 0;
}