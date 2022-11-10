#include<stdio.h>
int main(void){
	
	int option,option2,noOfGuest,days;
	float total;
	char yes_no;
	
	
	//for decorations
	printf("............Paradise Lanka............\n");
	printf("    ........Hotel PVT LTD........    \n");
	printf("      ........Welcome........    \n");
	
	//taking required inputs
	printf("  >Room Option: ");
	scanf("%d",&option);
	
	printf("\n");//for blank lines
	
	printf("  >No of Guest: ");
	scanf("%d",&noOfGuest);
	
	printf("\n");//for blank lines
	
	printf("  >No Of Days: ");
	scanf("%d",&days);
	
	printf("\n");//for blank lines
	
	
	//loop for error handling for selecting options
	while(1){
		
		switch(option){
			case 1:
				if(noOfGuest == 2){
					total = (float)45000*noOfGuest;
					break;
					
				}
				else if (noOfGuest >= 3 && noOfGuest <= 5){
					
					total = (float)44000*noOfGuest;
					break;
					
				}
				else if (noOfGuest > 5){
					
					total = (float)43000*noOfGuest;
					break;
					
				
				}
			case 2:
				if(noOfGuest == 2){
					total = (float)40000*noOfGuest;
					break;
					
				}
				else if (noOfGuest >= 3 && noOfGuest <= 5){
					
					total = (float)38000*noOfGuest;
					break;
					
				}
				else if (noOfGuest > 5){
					
					total = (float)35000*noOfGuest;
					break;
					
				
				}
			case 3:
				if(noOfGuest == 2){
					total = (float)37500*noOfGuest;
					break;
					
				}
				else if (noOfGuest >= 3 && noOfGuest <= 5){
					
					total = (float)35000*noOfGuest;
					break;
					
				}
				else if (noOfGuest > 5){
					
					total = (float)32000*noOfGuest;
					break;
					
				
				}
			default:
				
				//Error handling
				printf("!!!!!! Error Please Enter valud Room Option !!!!!!\n");
				printf("  >Room Option: ");
				scanf("%d",&option);
		}
		
		break;
		
	}
		

	printf("Do you need any additional tours ( y/n) :");
	scanf(" %c%*c",&yes_no);
	
	
	//check and add the values to total
	while(yes_no == 'Y'|| yes_no == 'y'){
		
		printf("  >Input your option :");
		scanf("%d",&option2);
		
		if(option2 == 1){
			total = (float)total + (3500*noOfGuest);
			
		}
		else if (option2 == 2){
			total = (float)total + (1000*noOfGuest);
			
		}
		else if (option2 == 3){
			total = (float)total + (1500*noOfGuest);
			
		}
		else if (option2 == 4){
			total = (float)total + (2000*noOfGuest);
			
		}
		
		printf("\nDo you need any additional tours ( y/n) :");
		scanf(" %c%*c",&yes_no);
		
	}
	
	//final total printing
	printf("\n  >Total Price :%.2f",total);

	
	
	
	
	return 0;
}

