#include<stdio.h>
int main(void){
	
	float module,total,max=0;
	int count = 1,i,x,j;
	int tot[5];	
	
	//repeating for 4 students
	for(i=1; i<=3;i++){
		
		printf("\n\nStudent %d",i);
		
		//to enter marks 4 times
		while (count <= 4){
			
		printf("\nEnter marks of Module%d :",count);
		scanf("%f",&module);
		
		total = (float)total + module;
		
		tot[count]= total;//array used to collect the 3 total values
		
		count = count + 1;
		
		
		}
		
		
		
		
		printf("\nTotal Marks of Student%d :%.2f",i,total);
		
		count = 1;//intializing count to zero to run the while loop again
		total = 0;//same as above comment
		
	}
	
	
	//to check the condition for largest total
	for(j =1;j<=4;j++){
		
		if (tot[j]<tot[j+1]){
			max = tot[j+1];
		}
		else {
			max = tot[j];
		}
	}
	
	printf("\nhighest marks is: %f",max);
	
	return 0;
	
}
