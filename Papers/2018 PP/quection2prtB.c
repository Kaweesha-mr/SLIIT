#include<stdio.h>

int main(void){

	//variable declearing
	char bulbs[4][4];
	int i,j,k,l;
	char  test;
	
	
	
	//getting the colours of the array by user inputs
	for(i =0;i<4;i++){
		
		printf("Line %d\n",i+1);
		
		for(j=0;j<4;j++){
			printf("Enter the colour for [%d][%d] : ",i,j);
			scanf(" %c%*c",&test);
			
			if(test == 'R' || test == 'G' || test == 'B'){
				bulbs[i][j] = test;
			}			
		}
	}
	
	printf("\n");
	
	//printing the array
	for(k=0;k<4;k++){
		
		for(l=0;l<4;l++){			
			printf("%c " ,bulbs[k][l]);
		}

		printf("\n");
	}
	
	//printing the locations of red colour bulbs
		
	printf("RED LED bulbs position\n");	
	for(k=0;k<4;k++){
		for(l=0;l<4;l++){	
	
			if(bulbs[k][l] == 'R'){
				printf("[%d,%d] ",k,l);
			}	
			
		}

	}
	
	
	return 0;
}
