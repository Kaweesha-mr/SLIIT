#include<stdio.h>

int main(void){

    //variable 
    char name[50];
    char appointment;
    int i,c=0,t=0,s=0;

    //file pointer declear
    FILE *ptr;

    //opening file to write
    ptr = fopen("appointment.dat","w");

    //check file is opened or not
    if (ptr == NULL){

        printf("File Status : unopend\n");
        return -1;
    }
    
    printf("File Status : opened\n");

    //loop to get user inputs and save them in the file
    for(i = 0; i<5 ; i++){

        printf("Enter Name :  ");
        scanf("%s",name);
        fprintf(ptr,"%s    ",name);

        printf("Enter appointment type : ");
        scanf(" %c%*c",&appointment);
        fprintf(ptr,"%c \n",appointment);
    }
    //closing the file
    fclose(ptr);

    //opening the file for reading
    ptr = fopen("appointment.dat","r");
    //check file is opened or not
    if (ptr == NULL){

        printf("File Status : unopend\n");
        return -1;
    }
    printf("File Status : opend\n");



	fscanf(ptr,"%s %c%*c",name,&appointment);//used to stop the extra round which curser goes through the line
	
    //counting the appointment type
    while(!feof(ptr)){

        fscanf(ptr,"%s %c%*c",name,&appointment);
        switch(appointment){

            case 'C':{
                c++;
                break;
            }
            case 'S':{
                s++;
                break;
            }
            case 'T':{
                t++;
                break;
            }
        }  
    }

    //prinitng the outputs as given
    printf("    Appointment Type\tNumber of Patients\n");
    printf("    >consulting\t\t%d\n",c);
    printf("    >Scanning\t\t%d\n",s);
    printf("    >Testing\t\t%d\n",t);  
    fclose(ptr);
    return 0;
}
