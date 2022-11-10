#include<stdio.h>

int main(void){
	
	int typeOfRoom,no_days;
    char crd_type;
    char a_basis;
    double total;
    
    
    
        while(typeOfRoom !=(-1)){
        
            printf("Enter Room type :");
            scanf("%d",&typeOfRoom);
            
            if (typeOfRoom == 1 || typeOfRoom == 1 || typeOfRoom == 1){
            	
			}
			else{
				printf("Invalid room type");
				continue;
				
			}
    
            printf("Enter Accommodation Basis (F/H) :");
            scanf("%c%*c",&a_basis);
            
            total = calculate(typeOfRoom,a_basis);
            printf("%lf",total);
            
            if (typeOfRoom == 1 && a_basis =='F' ){
            	total = total + 25555;
            	
			}
			else if (typeOfRoom == 1 && a_basis =='H' ){
				total = total + 17250;
				
			}
			else if (typeOfRoom == 2 && a_basis =='F' ){
				total = total + 17500;
				
			}
			else if (typeOfRoom == 2 && a_basis =='H' ){
				total = total + 12250;
				
			}
			else if (typeOfRoom == 3 && a_basis =='F' ){
				total = total + 9000;
				
			}
			else if (typeOfRoom == 3 && a_basis =='H' ){
				total = total + 7250;
				
			}
    
    }
    
    printf("Enter No of days :");
    scanf("%d",&no_days);
    
    printf("Enter Reward Card Type ( G, S, B ) :");
    scanf("%c",&crd_type);
    
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
	return 0;
    
    
}
