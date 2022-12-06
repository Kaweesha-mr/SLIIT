#include<stdio.h>


int main(void){
	
	//delceare the variables
	int type,count,discount[3]={0},i,temp,D;
	char size,c,o,l;
	float total=0,Discount,finaltot;
	
	
	//looping user input		
	printf("   >Enter Pizza Type: ");
	scanf("%d",&type);
	
	
	while(type != -1){

	printf("   >Enter size of the pizza: ");
	scanf(" %c%*c",&size);
	
	printf("   >Enter no of pizzas customer need : ");
	scanf("%d",&count);
		
	if(!(type == 1 || type == 2)){
		printf("Please Enter a valid type of pizza\n programe terminated");
		return -1;
	}
	
	if(!(size == 'M' || size == 'L')){
		printf("Please Enter a valid size of pizza\n programe terminated");
		return -1;
	}
	
	
	//checking the conditions and calculating the total according to that
	if(type == 1 && size == 'L'){
		total = total+1720*count;
	}
	else if(type == 1 && size == 'M'){
		total = total+975*count;
	}
	else if(type == 2 && size == 'L'){
		total = total+1820*count;
	}
	else if(type == 2 && size == 'M'){
		total = total +1000*count;	
	}
		
		printf("   >Enter Pizza Type: ");
		scanf("%d",&type);
	}
	
	//getting user input
	printf("Are you paying by credit card (Y/N) ?:");
	scanf(" %c%*c",&c);
	
	printf("Are you a loyalty customer(Y/N) : ");
	scanf(" %c%*c",&l);
	
	printf("Is this an online order (Y/N)?");
	scanf(" %c%*c",&o);
	
	
	if(c == 'y' || c == 'Y'){
		discount[0] = 20;
	}
	if(l == 'y' || l == 'Y'){
		discount[1] = 10;
	}
	if( o == 'y' || o == 'Y'){
		discount[2] = 5;
	}
	
	//getting the highest discount value
	for(i=0;i<3;i++){
		
		temp = discount[0];
		if(temp < discount[i]){
			D = discount[i];
		}
	}
	
	//calculating the discounts and final total
	Discount = (float)(D/100.0)*total;
	finaltot = total - Discount;
	
	//printing the outputs	
	printf("Total Bill Amount : %.2f\n",total);
	printf("Discount : %.2f\n",Discount);
	printf("Net Amount : %.2f\n",finaltot);
	
	
	
	
	
	
	return 0;
}
