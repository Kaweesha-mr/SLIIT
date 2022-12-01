#include<stdio.h>



//declearing the functions
float calculateH(int count);
float calculateF(int count);
float calculateM(int count);


int main(void){
	
	//variables
	char type;
	int count=0,M=0,F=0,x=0,H=0;
	float H_total,F_total,M_total;
	
	printf("Enter the course Type : ");
	scanf(" %c%*c",&type);
	
	//loop to count values
	while(count != 3 ){
			
		if(type == 'H' || type == 'h'){
			H++;
		}
		else if(type == 'M' || type == 'm'){
			M++;
		}
		else if(type == 'F' ||type == 'f'){
			F++;
		}
		else{
			
			printf("Enter Valid Type \n");
			
			printf("Enter the course Type : ");
			scanf(" %c%*c",&type);
			continue;
		}
		
		if(count != 2){
			
			printf("Enter the course Type : ");
			scanf(" %c%*c",&type);
		}

		
		count++;
		
	}
	
	//functions calling
	H_total = calculateH(H);
	M_total = calculateM(M);
	F_total = calculateF(F);
	
	
	//prnting the output
	printf("Total Count of H : %d Amount  : %.2f\n",H,H_total);
	printf("Total Count of M:  %d Amount  :%.2f\n",M,M_total);
	printf("Total Count of F:  %d Amount  :%.2f\n",F,F_total);
	
	return 0;
}


float calculateH(int count){
	
	return 1500*count;
	
}
float calculateF(int count){
	
	return 2500*count;
	
}
float calculateM(int count){
	
	return 2000*count;
	
}



