#include<stdio.h>
int main(void){

    //declearing the variables
    char type;
    float H_total=0,M_total=0,F_total=0;
    int H_count=0,M_count=0,F_count=0,count=0;

    //getting the user input
    printf("Enter Cource Type (to Terminate the programe enter 1) : ");
    scanf(" %c",&type);

    //loop to run until 100
    while(count != 100 ){
    
    //checking conditions
    if(type == 'H' || type == 'h'){
        H_total = H_total + 1500;
        H_count = H_count + 1;
    }
    else if (type == 'M' || type == 'm'){
        M_total = M_total + 2000;
        M_count = M_count + 1;

    }
    else if(type == 'F' || type == 'f'){
        F_total = F_total + 2500;
        F_count = F_count + 1;

    }
    else{
        if(type == '1'){
            break;
        }
        else{

            //if user enters a invalid input this will reask the user without going to the next round of the loop
            printf("Enter Valid data type\n");
            
            printf("Enter Cource Type (to Terminate the programe enter 1) : ");
            scanf(" %c",&type);
            continue;
        }
        
    }

    printf("Enter Cource Type (to Terminate the programe enter 1) : ");
    scanf(" %c",&type);
    count = count+1;//increment variable
    
    }


    //printing user inputs count of each type and total registraton fee of each type
    printf("Count of H course Type : %d\n",H_count);
    printf("Total Registration Fee for type H : %.2f\n",H_total);

    printf("Count of M course Type : %d\n",M_count);
    printf("Total Registration Fee for type M : %.2f\n",M_total);

    printf("Count of F course Type : %d\n",F_count);
    printf("Total Registration Fee for type F : %.2f\n",F_total);



    return 0;
}



