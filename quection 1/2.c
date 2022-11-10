#include<stdio.h>
int main(void){
	
	float module,total;
	int count = 1,i;
	
	//repeating for 4 students
	for(i=1; i<=4;i++){
		
		printf("\n\nStudent %d",i);
		
		//to enter marks 4 times
		while (count <= 4){
			
		printf("\nEnter marks of Module%d :",count);
		scanf("%f",&module);
		
		total = total + module;
		count = count + 1;
		
		}
		
		printf("\nTotal Marks of Student%d :%.2f",i,total);
		
		count = 0;//intializing count to zero to run the while loop again
		
	}
	
	return 0;
	
}
