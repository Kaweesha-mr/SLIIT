#include<stdio.h>

int main(void){

  //declearing the variables
  int n,number;

  //asking for user inputs
  printf("Enter Number : ");
  scanf("%d",&n);

  //creating a pointer name ptr
  FILE *ptr;
  ptr = fopen("number.dat","r");

  //check whether file is opned or not
  if (ptr == NULL){

    printf("File Status : unopend\n");
    return -1;//used to terminate the programe insted of running from here
  }
  printf("File Status : open\n");

  //loop used to check and append new value 
  // !feof(file pointer name) - used to read the values until curser reach the end 
  while(!feof(ptr)){

    fscanf(ptr,"%d",&number);
    if(number == n){
      printf("Number is already on the list\n");
    }
    else{
      fprintf(ptr,"%d",n);
    }
  }

  //loop used to print the file data
    while(!feof(ptr)){
    fscanf(ptr,"%d",&number);
    fprintf(ptr,"%d",number);
  }

  //closing the file
  fclose(ptr);

  return 0;
}