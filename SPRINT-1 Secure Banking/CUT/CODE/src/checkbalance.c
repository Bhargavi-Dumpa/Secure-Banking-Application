#include<stdlib.h>
#include<string.h>
#include "bank.h"
#include<stdio.h>

void checkBalance(char usname[])
{
      
    double balance;
    FILE *ftranact;

    char tranactFile[SIZE]=" ";


    strcpy(tranactFile,usname);
    strcat(tranactFile,"Transaction.dat");
    ftranact=fopen(tranactFile,"r");
    //file opening or not 
    if(ftranact==NULL)
    {
        printf("FILE NOT OPEN");
    }
	// reading data from the file to display balance 
    fread(&balance , 8, 1, ftranact);
    //balance in account
    printf("Currently Balance in account = %lf \n",balance);
    
} 
