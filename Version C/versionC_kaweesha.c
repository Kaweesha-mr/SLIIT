#include<stdio.h>

int main (void){


    //declearing variables
    int option,t_option,no;
    char size,yes_no;
    float total;

    //taking the required inputs
    printf("  >Input Pizza Option    :");
    scanf("%d",&option);

    printf("  >Size of the Pizza (P/M/L)    :");
    scanf(" %c%*c",&size);

    printf("   >Number of Pizza :  ");
    scanf("%d",&no);


    //loop for error handling for selecting options
	while(1){
		
		switch(option){
			case 1:
				if(size == 'P' || size == 'p'){
					total = (float)560 * no;
					break;
					
				}
				else if (size == 'M' || size == 'm'){
					
					total = (float)920 * no;
					break;
					
				}
				else if (size == 'L' || size == 'l'){
					
					total = (float)1800 * no;
					break;
					
				
				}
			case 2:
				if(size == 'P' || size == 'p'){
					total = (float)340 * no;
					break;
					
				}
				else if (size == 'M' || size == 'm'){
					
					total = (float)660 * no;
					break;
					
				}
				else if (size == 'L' || size == 'l'){
					
					total = (float)1300 * no;
					break;
					
				
				}
			case 3:
				if(size == 'P' || size == 'p'){
					total = (float)760 * no;
					break;
					
				}
				else if (size == 'M' || size == 'm'){
					
					total = (float)1100 * no;
					break;
					
				}
				else if (size == 'L' || size == 'l'){
					
					total = (float)2100 * no;
					break;
					
				
				}
			default:
				
				//Error handling
				printf("!!!!!! Error Please Enter a valid pizza option !!!!!!\n");
				printf("  >input pizza Option: ");
				scanf("%d",&option);
		}
		
		break;
		
	}    
   
//loop for extra toppings
    printf("  >Do you need any extra toppings ( y/n) :");
	scanf(" %c%*c",&yes_no);

    while(yes_no == 'Y'|| yes_no == 'y'){

        printf("  >Input your option :");
		scanf("%d",&t_option);
		
		if(t_option == 1){
			total = (float)total + (320*no);
			
		}
		else if (t_option == 2){
			total = (float)total + (140*no);
			
		}
		else if (t_option == 3){
			total = (float)total + (130*no);
			
		}
		else if (t_option == 4){
			total = (float)total + (150*no);
			
		}
		
        
	    printf("  >Do you need any extra toppings ( y/n) :");
	    scanf(" %c%*c",&yes_no);
		
	}
	
	//final total printing
	printf("\n  >Total Price :%.2f",total);



    return 0;
}