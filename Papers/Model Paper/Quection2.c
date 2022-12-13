#include<stdio.h>

int main(void){

	//variable decleare
    float usage[4][7],max,min,max_d,max_w,min_d,min_w,max_day,min_day,avg=0,total=0;
    int i,j;


//getting user inputs
    for(i=0;i<4;i++){

        for(j=0;j<7;j++){

            printf("Enter usage of Week %d Day %d\n",i+1,j+1);
            scanf("%f",&usage[i][j]); 

            total = total + usage[i][j];
        }
    }
    
    //calculating the maximum value
    max = 0;
    for(i=0;i<4;i++){

        for(j=0;j<7;j++){

            if(max<usage[i][j]){
			 	max = usage[i][j];
                max_d = j;
                max_w = i;
            }
        }
    }
    
    //calculating the minimum value
    min = usage[0][0];
    for(i=0;i<4;i++){

        for(j=0;j<7;j++){

            if(min>usage[i][j]){
                min = usage[i][j];
                min_d = j;
                min_w = i;
                
            }
        }
    }
    
    //calculating the number of the day in months for maximum and minimum values
    max_day = max_d + ((max_w)*7);
    min_day = min_d + (min_w)*7;

    
    //printing the outputs
    printf("Day of the months with maximum usage : %.0f\n",max_day-1);
    printf("maximum : %.1f\n",max);
    printf("Day of the months with minimum usage : %.0f\n",min_day+1);
    printf("minimum : %.1f\n",min);

    avg = total/28;

	//printing the total and average consumption for month
    printf("Average usage of the month : %.2f\n",avg);
    printf("Total Usage of Month : %.2f",total);

    return 0;
}
