// Including the necessary header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bank.h"

int main()
{
	//Main menu switch cases
	char choice[60];
	while(1){
	printf("==========================================================================\n");
	printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$   Secure Banking   $$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
	printf("==========================================================================\n");
	printf("1.Create Account\n");
	printf("2.Already user login\n");
	printf("3.Exit\n");
	printf("Enter your choice:");

	scanf("%s",choice);
	int ch=atoi(choice);
	
	switch(ch)
        {
                case ACCOUNT: account();
                        break;
                        
		        case LOGIN: login();
                        break;
                case EXIT: exit(0);
                default: printf("Invalid Input\n\n");
        }
	}
}