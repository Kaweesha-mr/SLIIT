#include<stdio.h>

//there are few nmistakes to be rebuild

int main(void){
    int players,count,score,i;
    float total =0,avg=0;

    printf("How many players are in the race : ");
    scanf("%d",&players);
    printf("\nEnter the scores of player%d (between0-7) :",i);
for(i = 1;i<=players;i++){

    
    
    printf("\nRound %d- ",i);
    scanf("%d",&score);
    if (!(score>0 && score < 7)){

        printf("\nenter valid score\n");
        break;
    }

    total = total + score;
}
    avg = total/players;
    printf("   >Average score - %.2f",avg);
    


    return 0;
}