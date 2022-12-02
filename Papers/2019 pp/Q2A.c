#include<stdio.h>

int main(void){
	
	int fib[10] = {0},i,j;
	fib[0] = 0;
	fib[1] = 1;
	
	for(i=0;i<10;i++){
		fib[i+2] = fib[i]+fib[i+1];
	}
	
	for(j=0;j<10;j++){
		
		printf("%d ",fib[j]);
	}
	return 0;
}
