#include<stdio.h>

int main(void){
	
	int typeOfRoom,no_days;
    char crd_type;
    int a_basis;
    float total=0;
    
    printf("Enter Room type :");
    scanf("%d",&typeOfRoom);
    
    
    

        while(typeOfRoom !=(-1)){
       	    
			printf("Enter Accommodation Basis (F/H) :");
            scanf("%d",&a_basis);
            
            
            if (typeOfRoom == 1){
            	
            	switch(a_basis){
            		
            		case 70:
            			total = total + 25555;
            			break;
            		case 72:
            			total = total + 17250;
            			break;			
				}
            	
            	
			}
			else if (typeOfRoom == 2){
				
				switch(a_basis){
					case 70:
						total = total + 17500;
						break;
					case 72:
						total = total + 12250;
						break;
						
					
				}
				
				
			}

			else if (typeOfRoom == 3 ){
				
				switch(a_basis){
					case 70:
						total = total + 9000;
						break;
					case 72:
						total = total + 7150;
						break;	
					
				}	
			}
		
			
			printf("Enter Room type :");
            scanf("%d",&typeOfRoom);
            
            printf("%f",total);
    
    	}	
    
    printf("Enter No of days :");
    scanf("%d",&no_days);
    
    printf("Enter Reward Card Type ( G, S, B ) :");
    scanf("%c%*c",&crd_type);
    
    if (crd_type == 'G'){
    	
    	total = (total*no_days);
    	total = total - (total*0.125);
    	
	}
	else if (crd_type == 'S'){
		
		total = (total*no_days);
    	total = total - (total*0.115);
		
	}
	else if (crd_type == 'B'){
		total = (total*no_days);
    	total = total - (total*0.095);
		
	}
	else {
		printf("please enter a valid card type\n");
	}
	
	printf("tota cost is %.2f",total);
	return 0;
    
    
}
