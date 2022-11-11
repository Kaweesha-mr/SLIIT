#include<stdio.h>
int main(void){

    int type,quantity;
    float total;

    //decoration
    printf("............Pramotion............");
    printf("\n\tGrab your burger today\n\n");
    
    //taking the 1st input for loop
    printf("Enter Burger Type : ");
    scanf("%d",&type);

while(type == 1 || type == 2 || type == 3 ){

    printf("Enter Quantity : ");
    scanf("%d",&quantity);

    if(type == 1){

        total = total + (500.00 * quantity);
    }
    else if (type == 2){

        total = total + (500.00 * quantity);
        total = total + (quantity*50);


    }
    else if (type == 3){
        total = total + (500.00 * quantity);
        total = total + (quantity*100);
    }

    printf("Total Price  :%.2f ",total);



    printf("\nEnter Burger Type : ");
    scanf("%d",&type);
}

    return 0;
}