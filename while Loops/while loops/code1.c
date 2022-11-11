#include<stdio.h>

int main(void){

    int type,quantity;
    float total;

    printf("Enter Pizza type: ");
    scanf("%d",&type);

while(type != -1 ){
    
    printf("\nEnter Quantity: ");
    scanf("%d",&quantity);

    switch(type){
        case 1:
            total = 1000.00;
            total = total*quantity;

            if (quantity>3){
                total = total + (total*0.1);
            }
            break;

        case 2:
            total = 1600.00;
            total = total*quantity;
            if (quantity>3){
                total = total + (total*0.12);
            }
            break;
        case 3:
            total = 1400.00;
            total = total*quantity;
            if (quantity>3){
                total = total + (total*0.15);
            }
            break;
        default:
            printf("Please Enter a valid type:\n");
            printf("\nEnter Pizza type: ");
            scanf("%d",&type);
            continue;
             }
    printf("\nTotal price :%.2f",total);
        
    printf("\n\nEnter Pizza type: ");
    scanf("%d",&type);
    
        

    }
    return 0;
}