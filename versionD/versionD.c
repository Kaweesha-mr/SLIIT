#include<stdio.h>

int main (void){


    //declearing variables
    int option,t_option,no;
    char size,yes_no;
    float total;

    printf("------------Welcome to Fly with me Travles PVT LTD----------\n");
	printf("used option as -1 to terminate\n");

    //taking the required inputs
    printf("  >Input Airline Option    :");
    scanf("%d",&option);

    printf("  >Class type ( E/ B )    :");
    scanf(" %c%*c",&size);

    printf("   >Number of seats :  ");
    scanf("%d",&no);


    //loop for error handling for selecting options
	while(1){
		
		switch(option){
			case 1:
				if(size == 'E' || size == 'e'){
					total = (float)36500 * no;
					break;
					
				}
				else if (size == 'B' || size == 'b'){
					
					total = (float)77600 * no;
					break;
					
				}

				
			case 2:
				if(size == 'E' || size == 'e'){
					total = (float)35800 * no;
					break;
					
				}
				else if (size == 'B' || size == 'b'){
					
					total = (float)76500 * no;
					break;
					
				}
			case 3:
				if(size == 'E' || size == 'e'){
					total = (float)54600 * no;
					break;
					
				}
				else if (size == 'B' || size == 'b'){
					
					total = (float)84700 * no;
					break;
					
				}
            case 4:
				if(size == 'E' || size == 'e'){
					total = (float)28500 * no;
					break;
					
				}
				else if (size == 'B' || size == 'b'){
					
					total = (float)42800 * no;
					break;
					
				}
			default:
				
				//Error handling
				printf("!!!!!! Error Please Enter a valid pizza option !!!!!!\n");
				printf("  >Input Airline Option    :");
                scanf("%d",&option);
		}
		
		break;
		
	}    
   
//loop for extra toppings
    printf("  >Do you need any extra services ( y/n) :");
	scanf(" %c%*c",&yes_no);

    while(yes_no == 'Y'|| yes_no == 'y'){

        printf("  >Input your option :");
		scanf("%d",&t_option);
		
		if(t_option == 1){
			total = (float)total + (7800*no);
			
		}
		else if (t_option == 2){
			total = (float)total + (1500*no);
			
		}
		else if (t_option == 3){
			total = (float)total + (19500*no);
			
		}
		else if (t_option == 4){
			total = (float)total + (2000*no);
			
		}
		
        
	    printf("  >Do you need any extra services ( y/n)  :");
	    scanf(" %c%*c",&yes_no);
		
	}
	
	//final total printing
	printf("\n  >Total Price :%.2f",total);



    return 0;
}