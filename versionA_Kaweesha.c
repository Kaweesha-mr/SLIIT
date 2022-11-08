#include<stdio.h>
int main(void){
	
	
	//declearing the variables
	
	int roomType,noOfDays;
	char boardType,cardType;
	float total =0,discount;
	
	//decoration for the program
	
	printf("------------Welcome to ABC Hotes PVT LTD----------\n");
	printf("used room type as -1 to terminate\n");
	
	//taking the room type before the while statement to check the condition
	printf("   >Enter room type :");
	scanf("%d",&roomType);
	
	while(roomType != -1){
		
		//detecting invalid room type
		
		if (!(roomType == 1 || roomType == 2 || roomType == 3)){
			printf("please enter a valid room type");
			break;
		
		}
		
		printf("   >Enter no of ddays :");
		scanf("%d",&noOfDays);
		
		printf("   >Enter accomadation Basics :");
		scanf(" %c%*c",&boardType);
		
		//assiging the related amount for entered room type and board type
		
		switch(roomType){
			
			case 1:
				if (boardType == 'F'){
					total = 25555;
				break;
				
					
				}
				else if (boardType == 'H'){
					total = 17250;
				break;
				
					
					
				}
			case 2:
				if (boardType == 'F'){
					total = 17500;
				break;
					
					
				}
				else if (boardType == 'H'){
					total = 12250;
				break;
					
				}
			case 3:
				if (boardType == 'F'){
					total = 9000;
					
				break;
					
				}
				else if (boardType == 'H'){
					total = 7250;
				break;
					
				}
		}
		//geting the loyalty card type
		
		printf("   >Enter Card Type(G,S,B) :");
		scanf(" %c%*c",&cardType);
		
		//assiging and reducing the discounted amount from the total
		
		if (cardType == 'G'){
			discount = total * 0.125;
			total  = total - discount;
			
		}
		else if (cardType == 'S'){
			discount = total * 0.115;
			total  = total - discount;
			
		}
		else if (cardType == 'B'){
			discount = total * 0.095;
			total  = total - discount;	
		}
		
		//printing the final output
		
		printf("   >Total Amount is %.2f\n",total);
		
		//repition of the program
		
		printf("   >Enter room type :");
		scanf("%d",&roomType);
		
	}
	return 0;
}
