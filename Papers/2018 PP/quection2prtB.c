#include<stdio.h>

int main(void){
	
	//DECLEARING THE VARIABLES
	char bulb[4][4];
	int i,j;
	
	
	//GETTING USER INPUTS FOR BULBS COLOURS
	for(i=0;i<4;i++){
		
		for(j=0;j<4;j++){
			
			printf("Enter Bulb Colour of [%d,%d]: ",i,j);
			scanf(" %c",&bulb[i][j]);
		}
	}
	
	//PRINTING THE LIGHT ARRAY
	for(i=0;i<4;i++){
		
		for(j=0;j<4;j++){
			
			printf(" %c ",bulb[i][j]);
		}
		puts("");
	}
	
	
	//PRINTING THE RED BULB POSITIONS
	printf("Red Bulbs Positions \n");
	
	
	for(i=0;i<4;i++){
		
		for(j=0;j<4;j++){
			
			if(bulb[i][j] == 'R'){
				
				printf("[%d,%d]",i,j);
			}
		}
	}
	
	
	
	
	
	
	return 0;
}
