#include<Stdio.h>
#include<assert.h>

//declearing the functions
float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();




int main(void){
	
	//declearing the variables
	int i;
	float amount,interest,total;
	
	//getting user inputs
	printf("Enter Amount : ");
	scanf("%f",&amount);
	
	printf("Enter interest : ");
	scanf("%f",&interest);
	
	
	
	//calculating and printing the  total amount for 5 years
	for(i=0;i<5;i++){
		
		total = findTotalAmount(interest,amount);
		printf("Amount After Year %d: %.2f\n",i+1,total);
		
		amount = total;
		
	}
	
	
	
	
	return 0;
}

//functions used to calculate the annual interest
float calcAnnualInterest(float interestRate, float amount){
	if(amount<1,000,000.00){
		
		interestRate+=0.5;
	}
	return amount*interestRate/100;
}

//function used to calculate the total amount per year
float findTotalAmount(float interestRate, float amount){
	
	float interest = calcAnnualInterest(interestRate, amount);
	
	return interest+amount;
}

//assert functions
void testTotalAmount(){
	
	
}
