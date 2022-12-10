#include<stdio.h>
#include<assert.h>

//function declearing
float calDiscount(int time,float totAmount);
void testcalDis();
void displayGift(float total);

int main(void){
	
	//declearing the variables
	float total,discount,F_total;
	int time;
	
	//getting user inputs
	printf("Enter Total Amount : ");
	scanf("%f",&total);
	
	printf("Enter time :");
	scanf("%d",&time);
	
	//check if the given time is valid or not
	if(time>24){
		printf("Please Enter a valid Time \n");
		return -1;
	}
	
	else{
		
		//getting the discount by calling the function
		discount = calDiscount(time,total);
		
		//debugging the system by assert function
		testcalDis();
		
		//calculating the final total
		F_total = total - discount;
		
		printf("Total Amount(After Discount) : %.2f",F_total);
		
		//function to check and print the gift customer got
		displayGift(F_total);
		
		
	}
	
	return 0;
}




//function used to calculate the discount
float (calDiscount(int time,float totAmount)){
	
	if((time>16 && time<19) && (totAmount>= 5000)){
		
		return totAmount*0.1;
		
	}
	else if((time>16 && time<19) && (totAmount>= 5000 && totAmount <= 2500)){
		
		return totAmount*0.07;
		
	}
	if((time>20 && time<22) && (totAmount>= 5000)){
		
		return totAmount*0.12;
		
		
	}
	else if((time>20 && time<22) && (totAmount>= 5000 && totAmount <= 2500)){
		
		return totAmount*0.09;
		
	}
	
	else{
		
		return 0;
	}

}


//debugging function
void testcalDis(){
	
	assert(calDiscount(17,5400) == 540);
	assert(calDiscount(23,5400) == 0);
}


//gift selecting function
void displayGift(float total){
	
	if(total>=7000){
		
		printf("Free Gift :Packet of Milk\n");
	}
	else if(total>500 && total<6999){
		
		printf("Free Gift :1kg of Sugar\n");
	}
	else if(total>3000 && total<4999){
		
		printf("Free gift :pack of 6 eggs\n");
	}
	else{
		printf("Free gift :None");
	}
}
