#include<stdio.h>
int main(void){
    //declearing the variables
    char ins_type,type,yes_no;
    int childern;
    float total;

//loop to run for multiple insurances
   do{

    //taking the required inputs
     printf("Insurance Type :");
     scanf(" %c%*c",&ins_type);

    printf("Family or Individual (F - family and I - individual) :");
    scanf(" %c%*c",&type);

    //checking the insurance type
    if (ins_type == 'A'){
        if(type == 'f' || type == 'F'){

            total = 5200.00;
            //geting the number of children becouse it is a family insurance(comment 3) 
            printf("Number of children: ");
            scanf("%d",&childern);

            if(childern > 2){

                total = total + (total*0.1);
            }

        }
        else if (type == 'i' || type == 'I'){

            total = 4500.00;

        }
    }
    else if (ins_type == 'N'){
        if(type == 'f' || type == 'F'){
            total = 4300.00;
            
            printf("Number of children: ");
            scanf("%d",&childern);
            //(comment 3)
            if(childern > 2){

                total = total + (total*0.1);
            }

        }
        else if (type == 'i' || type == 'I'){
            total = 3100.00;

        }

    }
    else if (ins_type == 'D'){
        if(type == 'f' || type == 'F'){

            total = 4800.00;

            printf("Number of children: ");
            scanf("%d",&childern);
            //(comment 3)
            if(childern > 2){

                total = total + (total*0.1);
            }

        }
        else if (type == 'i' || type == 'I'){

            total = 3600.00;

        }

    }
    else if (ins_type == 'S'){
        if(type == 'f' || type == 'F'){

            total = 3800.00;
            printf("Number of children: ");
            scanf("%d",&childern);
            //(comment 3)
            if(childern > 2){

                total = total + (total*0.1);
            }

        }
        else if (type == 'i' || type == 'I'){

            total = 3300.00;

        }
    }
    else{
        printf("Invalid Insuarance Type ");
    }

    //printing the total amount

    printf("Total Amount :%.2f",total);

    printf("\ndo you want to continue: ");
    scanf(" %c%*c",&yes_no);

   }while(yes_no == 'Y' || yes_no == 'y');



    return 0;
}