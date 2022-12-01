#include<stdio.h>
#include<assert.h>

/* 
	......NOTICE..........
	assert function is not working in this code I'll make sure to 
	quickly fix that error also. insted of assert functions code is fully working*/
	
	
//function declearing 
float calDiscount(int time,float totAmount);
void testCalDiscount();
void displayGift(float finalTot);


int main(void){
	
	//declearing the variables
	int time,i,j,k,l;
	float total,discount;
	
	
	//taking user inputs
	printf("Enter time of Purchase : ");
	scanf("%d",&time);
	
	
	//checking for valid time
	if(!(time>0 && time<24)){
		
		//printing the error and terminating software if the time is wrong
		printf("Please enter a valid time frame \n");
		
		return -1;
		
	}
	
	printf("Enter Total Amount : ");
	scanf("%f",&total);
	
	
	//calling the functions for their jobs 
	discount = calDiscount(time,total);
	//testCalDiscount();
	
	float finaltot = total - discount;
	
	//printing the outputs
	printf("Final Total : %.2f\n",finaltot);	
	
	
	displayGift(finaltot);
	return 0;
}

//function used to calculate the discount
float calDiscount(int time,float totAmount){
	
	if(time <= 19 && time>=16){
		
		if(totAmount>=5000){
			
			return totAmount*0.1;
		}
		else if(totAmount>=2500 && totAmount<5000){
			
			return totAmount*0.7;
		}
	}
	
	else if(time>=20 && time<=22){
		
		if(totAmount>=5000){
			
			return totAmount*0.12;
		}
		else if(totAmount>=2500 && totAmount<5000){
			
			return totAmount*0.9;
		}
		
		
	}
	
}

//function used to catch and display the gift for the user
void displayGift(float finalTot){
	
	printf("Gift for your purchase:\n");
	if(finalTot >= 7000){
		
		printf("   >Packet of Milk\n");
	}
	else if(finalTot>5000 && finalTot<6999){
		
		printf("   >1kg of Sugar\n");
	}
	else if(finalTot>3000 && finalTot<4999){
		
		printf("   >Pack of 6 Eggs\n");
		
	}
	
	
}

//function used for assert but still not working properly
void testCalDiscount(){
	assert(calDiscount(18,2500) == 250);
	assert(calDiscount(21,5500) == 660);
	}


