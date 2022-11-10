#include<stdio.h>
int main(void){
	
	float module,total;
	int count = 1;
	
	while (count <= 4){
		printf("Enter marks of Module%d :",count);
		scanf("%f",&module);
		
		total = (float)total + module;
		count = count + 1;
	}
	
	printf("Total : %.2f",total);
	return 0;
}
