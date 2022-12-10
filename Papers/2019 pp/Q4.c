#include<stdio.h>


//functions to print append the new details
void append(long long int loyalty,char name[]);


int main(void){
	
	
	//variable decleare
	long long int loyalty,F_loyalty;
	int count=0,i;
	char name[20],F_name[20];
	
	FILE *ptr;
	
	ptr =fopen("loyalty.dat","w");
	
	if(ptr == NULL){
		
		printf("FILE Open Status : Not Opened");
		return -1;
	}
	else {
		
		//printing the details
		fprintf(ptr,"%lld\t%s\n",7728369210,"Dinesh");
		fprintf(ptr,"%lld\t%s\n",7773457219,"Subash");
	}
	
	fclose(ptr);
	
	ptr =fopen("loyalty.dat","r");
	
	if(ptr == NULL){
		
		printf("FILE Open Status : Not Opened");
		return -1;
	}
	else {
	
	
	
	for(i=0;i<5;i++){
		
		
		//getting user inputs		
		printf("Enter Loyalty Number : ");
		scanf("%lld",&loyalty);
		
		printf("\nEnter Name : ");
		scanf("%s",name);
		
		//read till the file end
		while(!feof(ptr)){
			
			fscanf(ptr,"%lld",&F_loyalty);
			fscanf(ptr,"%s",F_name);
			
			if(F_loyalty == loyalty){
				count++;		
			}
		}
		
		//append if the requested data is not in the list
		if(count == 0){
			append(loyalty,name);
		}
		count =0;
		rewind(ptr);
	
		
	}

	}
	
	return 0;
	
	
}


//appending function
void append(long long int loyalty,char name[]){
	
	FILE *ptr2;
	
	ptr2 =fopen("loyalty.dat","a");
	
	if(ptr2 == NULL){
		
		printf("File Opening Status : Not Opened");
	}
	else{
		//appending
		fprintf(ptr2,"%lld\t%s\n",loyalty,name);
	}
}
