#include<stdio.h>

int main(void){
	
	int emp_no,i,temp,k,attend[1],Attend=0;
	char name[20];
	
	//file open
	FILE *ptr;
	ptr = fopen("attendance.dat","r");
	
	//checking the file status
	if(ptr == NULL){
		
		printf("FILE STATUS : not opened");
		
		return -1;
	}
	else{
		
		printf("Enter employee number : ");
		scanf("%d",&temp);
		//looping till the end of the file
		while(!feof(ptr)){
			
			fscanf(ptr,"%d",&emp_no);
			fscanf(ptr,"%s",name);
			
			//reading the attendance
			for(i=0;i<7;i++){
				
				fscanf(ptr,"%d",attend);
				//counting the each attendance
				if(attend[0] == 1){
					Attend++;
				}
			}
			
			//printing the number of days attend for user requested employee number
			if(emp_no == temp){
				
				printf("No of Days attend : %d",Attend);
				break;
			}
			
			Attend =0;
				
		}	

		
		
	}
	//closing the file
	fclose(ptr);
	
	
	
	
	return 0;
}
