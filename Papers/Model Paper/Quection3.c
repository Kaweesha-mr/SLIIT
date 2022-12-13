#include<stdio.h>

int main(void){
	
	FILE *ptr;
	//opening the file
	ptr = fopen("charges.dat","w");
	
	if(ptr == NULL){
		
		printf("File Status : Not Opened");
		return -1;
	}
	else {
		
		//storing the data in file
		fprintf(ptr,"%s\t%.2f\t%.2f\t%.2f\n","0772123789",230.00,0.00,0.00);
		fprintf(ptr,"%s\t%.2f\t%.2f\t%.2f\n","0777890345",1025.00,546.00,3728.00);
		fprintf(ptr,"%s\t%.2f\t%.2f\t%.2f\n","0714289378",2345.00,135.00,0.00);
		fprintf(ptr,"%s\t%.2f\t%.2f\t%.2f\n","0723481230",548.00,10.00,0.00);
		fprintf(ptr,"%s\t%.2f\t%.2f\t%.2f\n","0776239487",2564.00,439.00,349.00);
	}
	
	fclose(ptr);
	
	//reopening the file to read	
	ptr = fopen("charges.dat","r");
	
	if(ptr == NULL){
		
		printf("File Status : Not Opened");
		return -1;
	}
	else {
		//variable declearation
		char number[10];
		float local,international,roaming;

	while(!feof(ptr)){
		
		//assiging the data to variables from the file
		fscanf(ptr,"%10s\t%f\t%f\t%f\n",number,&local,&international,&roaming);
		
		//printing the phone number and calculated amount for each number
		printf("Phone Number      :  %s\n",number);
		printf("Total Call Charge :  %.2f\n",(local+international+roaming));
		
		//to use a new line
		puts("");
	}
	
	fclose(ptr);	
	}
	
	return 0;
}
