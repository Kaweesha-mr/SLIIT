#include<stdio.h>


//user define structure to assign various values
struct people{
	int account;
	char name[15];
	char type;
	float amount;
};

//declearing functions
float minwidth(float w[],int n);
float maxdep(float d[],int x);


int main(void){
	
	//variable declearing
	int i,index=0,index2;
	struct people people[5];
	float withdraw[5] ={0},deposit[5] ={0},total_dep,total_width,max_dep,min_with;
	
	
	
	//entering user data to system
	for(i=0;i<5;i++){
		
		printf("\nEnter Account Number : ");
		scanf("%d",&people[i].account);
				
		printf("\nEnter Name : ");
		scanf(" %s",people[i].name);
		
		printf("\nEnter type : ");
		scanf(" %c%*c",&people[i].type);
		
		printf("\nEnter Amount : ");
		scanf("%f",&people[i].amount);
		
	
		//checking the conditions and calculating the total of each deposit and withdraw		
		if(people[i].type == 'W'|| people[i].type == 'w'){
			withdraw[index] = people[i].amount;
			index++;			
			total_width = total_width + people[i].amount;
		}
		else if(people[i].type == 'D' || people[i].type == 'd'){
			
			deposit[index2] = people[i].amount;
			index2++;
			total_dep = total_dep + people[i].amount;
		}
				
	}

	
	//1.print the withdrawal and deposit count
	printf("Total withdrawl Amount : %.2f\n",total_width);
	printf("Total deposit Amount : %.2f\n",total_dep);
	
	

	int l;	
	
	//calling the functions and getting the returning values
	max_dep = maxdep(deposit,5);
	min_with = minwidth(withdraw,5);
	
	//displaying the output
	for(l =0;l<5;l++){
		if(max_dep == people[l].amount){
			
			printf("Name of the maximum Deposit : %s\n",people[l].name);
			break;
		}
	}
	
	
	
	int m;	
	//displaying the output
	for(m =0;m<5;m++){
		if(min_with == people[m].amount){
			printf("Name of the minimum withdraw : %s\n",people[m].name);
			break;
		}
	}
	
	
	
	return 0;

}







//functions declearing
float minwidth(float w[],int n){
	
	int k;	
	float min_width;
	
	for(k=0;k<n;k++){
		
		if(w[k] == 0){
			
			continue;
		}
		int min =w[0];
		if( min > w[k]){
			min_width = w[k];
			
		}
		
	}
	
	//printf("Min width %f",min_width);
	
	return min_width;
}

float maxdep(float d[],int x){
	
	
	int k;	
	float max_dep;
	for(k=0;k<x;k++){
		
		
		if(max_dep < d[k]){
			max_dep = d[k];
			
		}
	}
	
	return max_dep;
	
	
	
}

	
	

