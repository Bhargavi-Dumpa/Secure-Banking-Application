#ifndef BANK_H
#define BANK_H

#define SIZE 200
#define BUFFER_SIZE 1000

#define ACCOUNT 1
#define LOGIN 2
#define EXIT 3

#define WITHDRAW 1
#define CHECKBALANCE 2
#define EDITDETAILS 3
#define DEPOSIT 4

#define PASSUPDATE 1
#define DETAILSUPDATE 2

// Creating a structure to store
// data of the user
typedef struct pass {
        char username[SIZE];
        int date, month, year;
        char pnumber[SIZE];
        int adharnum;
        char fname[SIZE];
        char lname[SIZE];
        char fathname[SIZE];
        char mothname[SIZE];
        char address[SIZE];
        char typeaccount[SIZE];
        long int accountno;
}pass;

typedef struct userpassword{
        char password[SIZE];
}userpassword;

typedef struct balance{
        double depositAmt;
}balance;

typedef struct loginUnamePword{
	char uname[SIZE];
	char pword[SIZE];
}loginUnamePword;

void displayMenu(char*);
void account(void);
void login();
void homepage(char*);
void deposit(char*);
int withdraw(char*,double);
void checkBalance(char*);
void editDetails(char*);



#endif

