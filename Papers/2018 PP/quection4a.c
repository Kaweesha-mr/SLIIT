#include<stdio.h>
struct emp{
	
	int id;
	char name[20];
	int attend[7];
	
};
int main(void){
	
	int i,j,k,l;
	struct emp emp[2];
	
	for(i=0;i<2;i++){
		printf("Enter Id of Employee %d :",i+1);
		scanf("%d",&emp[i].id);
		
		printf("Enter Employee Name : ");
		scanf(" %s",emp[i].name);
		
		for(j=0;j<7;j++){
			
			printf("Enter Attendance of Day %d :",j+1);
			scanf("%d",&emp[i].attend[j]);
		}
		puts("");
	}
	
	FILE *ptr;
	
	ptr = fopen("attendace.dat","w");
	
	if(ptr == NULL){
		
		printf("File : Status Not Opened");
		return -1;
	}
	else{
		for(k=0;k<2;k++){
			
			fprintf(ptr,"%d\t",emp[k].id);
			fprintf(ptr,"%s\t",emp[k].name);
			for(l=0;l<7;l++){
				fprintf(ptr,"%d",emp[k].attend[l]);
			}
			fprintf(ptr,"\n");
			
		}
		

	}
	fclose(ptr);
	
	return 0;
}
