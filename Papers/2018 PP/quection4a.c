#include<stdio.h>

//user defined variable
struct emp{
	int emp_no;
	char name[20];
	int attend[7];	
};


int main(void){
	
	//variable decleare
	int i,j,k,l,m,reading[7];
	struct emp emp[2];
	
	//file pointer decleare
	FILE *ptr;
	
	//file open
	ptr = fopen("attendance.dat","w");
	
	//checking the file status
	if(ptr == NULL){
		
		printf("FILE STATUS : not opened");
		
		return -1;
	}
	else{
		
		//taking user inputs
		for(i=0;i<2;i++){
		
		printf("Enter employee Number %d: ",i+1);
		scanf("%d",&emp[i].emp_no);
		
		printf("Enter Employee Name :");
		scanf("%s",emp[i].name);
		
		//taking attendance of the user
		for(j=0;j<7;j++){
			
			printf("Enter attendance for day %d (presenet=1, abcent =0): ",j+1);
			scanf("%d",&emp[i].attend[j]);
	}
}
			
			
	
	//printing the outputs in the file 	
	for(k=0;k<2;k++){
		fprintf(ptr,"%d  ",emp[k].emp_no);
		fprintf(ptr,"%s  ",emp[k].name);
		
		for(i=0;i<7;i++){
			
			fprintf(ptr,"%d ",emp[k].attend[i]);
		}
		fprintf(ptr,"\n");
		
	}	

	
	//closing the file
	fclose(ptr);
	
	}

	return 0;
}

	
