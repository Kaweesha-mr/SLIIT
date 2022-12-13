#include<stdio.h>
//function declearation
float calculateIncrement(int grade, float basicSalary);
float calcTotSalary(float salary, float increment);

int main(void){
	
	//variable decleare
	float salary,increment,total_amount;
	int grade;
	
	//getting user inputs
	printf("Enter Salary : ");
	scanf("%f",&salary);
	
	printf("Grade : ");
	scanf("%d",&grade);
	
	//calling the functions and getting the required data to print the output
	increment = calculateIncrement(grade,salary);
	total_amount = calcTotSalary(salary,increment);
	
	//printing the output
	printf("Increment : %.2f\n",increment);
	printf("Total     : %.2f",total_amount);
	
	return 0;
}
float calculateIncrement(int grade, float basicSalary){
	
	
	if(grade == 1){
		
		return basicSalary*0.10;
	}
	else if(grade == 2){
		
		return basicSalary*0.15;
	}
	else if(grade == 3){
		
		return basicSalary*0.20;
		
	}
	
}

float calcTotSalary(float salary, float increment){
	
	return salary+increment;
	
}
