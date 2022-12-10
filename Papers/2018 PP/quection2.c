#include<stdio.h>


//declearing the structure
struct details{
	
	int acc_num;
	char name[20];
	char type;
	float amount;
};


int main(void){
	
	//declearing variables
	struct details details[5];
	float D_amount,W_amount,min,max;
	int i,j,k;
	
	
	//getting user inputs 
	for(i =0; i<5;i++){
		
		printf("Enter Account Number of Customer %d :",i+1);
		scanf("%d",&details[i].acc_num);
		
		printf("Enter Name of Customer %d : ",i+1);
		scanf("%s",&details[i].name);
		
		printf("Enter Transaction Type : ");
		scanf(" %c",&details[i].type);
		
		printf("Enter Amount : ");
		scanf("%f",&details[i].amount);
		
		
		if(details[i].type =='W' || details[i].type =='w' ){
			W_amount = W_amount + details[i].amount;
		}
		else if (details[i].type =='D' || details[i].type =='d'){
			D_amount = D_amount + details[i].amount;
		}
		else{
			printf("Please Enter Valid Transaction Type: \n");
			return -1;
			
		}
		
	}
	
	
	printf("Total Deposite Amount : %.2f\n",D_amount);
	printf("Total Withdrawal Amount : %.2f\n",W_amount);
	
	
	//calculating the maximum diposite and printing the name
	max = details[0].amount;
	
	for(j=0;j<5;j++){	
	if (details[j].type == 'D' || details[j].type == 'd'){
			if(max<details[j].amount){
				max = details[j].amount;
		}
	}
			
	}
	
	for(k=0;k<5;k++){
		
		if(max == details[k].amount){
			
			printf("Maximum Deposite Customer Name : %s\n",details[k].name);
		}
	}
	
	
	
	//calculating the miimum of withdrawal amount and printing the name
	min = details[0].amount;
	
	for(j=0;j<5;j++){
		
	if (details[j].type == 'W' || details[j].type == 'w'){
			
			if(min > details[j].amount){
				min = details[j].amount;
		}
	}
			
	}
	
	for(k=0;k<5;k++){
		
		if(min == details[k].amount){
			
			printf("Minimum withdraw Customer Name : %s\n",details[k].name);
		}
	}
	

	
	
	
	return 0;
}

