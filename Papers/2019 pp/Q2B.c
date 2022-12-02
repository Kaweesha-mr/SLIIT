#include<stdio.h>

int main(void){
	
	int rating[3][4],i,j,highest,movie;
	float total,avg;
	
	
	//loop to get the user inputs
	for(i=0;i<3;i++){
		
		for(j=0;j<4;j++){
			
			printf("Enter Ratings for Movie %d : Reviewer %d :",i+1,j+1);
			scanf("%d",&rating[i][j]);
		}
	}
	highest =0;	
	
	//loop to print the values and calculate the average and print it
	for(i=0;i<3;i++){
		
		for(j=0;j<4;j++){
			printf("%d ",rating[i][j]);		
			total = total + rating[i][j];
		}
		
		avg = (float)total/4.0;
		printf("average rate: \t\t%.0f",avg);
		
		
		//finding the highest rated movie
		if(highest<avg){
				
				highest = avg;
				movie = i+1;
				
			}
		total=0;
		avg=0;
		
		puts(" ");
	}
	
	printf("Highest rated Movie is : %d",movie);
	
	
	
	return 0;
}
