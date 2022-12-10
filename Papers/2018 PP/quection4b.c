#include<stdio.h>

int main(void){
	
	int id,count,i,j;
	char name[20],attendance[7];
	
	
	FILE *ptr;
	
	ptr  = fopen("attendace.dat","r");
	
	if(ptr == NULL){
		
		printf("File Status : Not opened");
		return -1;
	}
	else {
		
		for(j=0;j<2;j++){
			
			fscanf(ptr,"%d",&id);
			fscanf(ptr,"%s",name);
			fscanf(ptr,"%s",attendance);
			
			for(i=0;i<7;i++){
				if(attendance[i] == '1'){
					count++;
				}
			}
			
			printf("%s\tNo of days attend : %d\n",name,count);
			count=0;
		}
		
	}
	fclose(ptr);
	
	return 0;
}
