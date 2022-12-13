#include<stdio.h>

int main(void){

    //variable declear
    char type,method,count ='Y';
    int num_Of_Rooms,num__Of_Nights;
    float total=0;

    //decoration
    printf("\n\t******---Blue Ocean---******");
    printf("\n\t    -----Welcome..-----\n");

    //loop to re ask the user
    do{
        //condition used to check wheather user input a wrong value insted of Y/y terminate the programe
        if(count == 'Y' || count == 'y'){
            
            
        //taking user inputs
        printf("\n   >Enter Room Type : ");
        scanf(" %c",&type);

   
        //checking the condition if user enters a wrong room type
        if(!(type == 'D' || type =='S' || type =='C' ||type == 'E' ||type == 'P')){
            printf("Please Enter Valid Room Type  \n");
             return -1;
        }
        
            printf("\n   >Enter Number of Rooms : ");
            scanf("%d",&num_Of_Rooms);
        
            printf("\n   >Enter Number Of nights :");
            scanf("%d",&num__Of_Nights);
        
            printf("\n   >Enter Paying Method( M - Money /C - card)");
            scanf(" %c",&method);
        
        
            //calculating the total for user requirements
            if(type == 'D'){
                total = total + 31000.00 * num_Of_Rooms * num__Of_Nights;
        
            }
            else if(type == 'S'){
                total = total + 35000.00 * num_Of_Rooms * num__Of_Nights;
        
            }
            else if(type == 'C'){
                total = total + 50000.00 * num_Of_Rooms * num__Of_Nights;
                
            }
            else if(type == 'E'){
                total = total + 75000.00 * num_Of_Rooms * num__Of_Nights;
                
            }
            else if(type == 'P'){
                total = total + 100000.00 * num_Of_Rooms*num__Of_Nights;
                
            }
            if(method == 'C'){
        
                total = total - total * 0.1;
            }
        
            //printing the total for selected item
            printf("Total : %.2f\n",total);
        
            //prompt the user to ask for another round
            printf("Do you Want to continue (Yes - Y / No - N) : ");
            scanf(" %c",&count);

        }
    else{
        
        printf("You have entered a wrong value");
        break;
        
    }

    


    }while(!(count == 'N' || count == 'n'));
    
    return 0;
}
