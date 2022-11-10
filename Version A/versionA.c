#include<stdio.h>

double calculate(int typeOfRoom, char a_basis){
    double total;

    if (typeOfRoom==1){
    
                if(a_basis=='F' || a_basis=='f'){
                    total = 25555.00;
                    
                }
                else if(a_basis=='H' || a_basis=='h'){
                    total = 17250.00;
                    
                }
                
    }
    else if (typeOfRoom==2){
    
                if(a_basis=='H' || a_basis=='h'){
                    total = 17500.00;
                    
                }
                else if(a_basis=='F' || a_basis=='f'){
                    total = 12250.00;
                    
                }
                
            }
    else if (typeOfRoom==3){
    
                if(a_basis=='F' || a_basis=='f'){
                    total = 9000.00;
                    
                }
                else if(a_basis=='F' || a_basis=='f'){
                    total = 7250.00;
                    
                }
                
            }
                
            
            return total;
}


int main(void){
    
    int typeOfRoom,no_days;
    char crd_type;
    char a_basis;
    double total;
    
    
    
        while(typeOfRoom !=(-1)){
        
            printf("Enter Room type :");
            scanf("%d",&typeOfRoom);
    
            printf("Enter Accommodation Basis (F/H) :");
            scanf("%c%*c",&a_basis);
            
            total = calculate(typeOfRoom,a_basis);
            printf("%lf",total);
    
    }
    
    
    return 0;
}
