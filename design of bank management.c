#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int i,j;
int main_exit;

void menu(void)
{   
    int choice;
    system("cls");
    system("color 9");
    printf("\n\n\t\t\tCUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM");
    printf("\n\n\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\t\t1.Create new account\n\t\t2.Update information of existing account\n\t\t3.For transactions\n\t\t4.Check the details of existing account\n\t\t5.Removing existing account\n\t\t6.View customer's list\n\t\t7.Exit\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);

    system("cls");
    switch(choice)
    {
        case 1:printf("new_acc");
        break;
        case 2:printf("edit");
        break;
        case 3:printf("see");
        break;
        case 4:printf("erase");
        break;
        case 5:printf("view_list");
        break;
        

    }
}
int main()
{

    char name[60];
	char menu;
	int i=0;
	int acc_no;
    int addacc_no=1000;
	int day,month,year;
	double mobile_no;
    char address[60];
	FILE *ptr;
	ptr=fopen("record.dat","a+");
	printf("\n\n\n\t Enter Account no:\t");
	scanf("%d",&acc_no);
	
	if(acc_no<=addacc_no)
	{
		printf("\n-------------- Account is in use----------");
		printf("\nEnter 1 to retry & 0 to exit");
		scanf("%d",&main_exit);
		if(main_exit==1)
		{
			system("cls");
			main();
		}
		else if(main_exit==0)
		{
			system("cls");
            			
		}
		
	}
	else
	{
		printf("\n -----------------New Account opended-------------------- ");
	}
	addacc_no==acc_no;
	printf("\n Enter name:\t");
	scanf("%s",&name);
	printf("\n Enter dob (dd/mm/yy):\t ");
	scanf("%d/%d/%d",&day,&month,&year);
	printf("\n Enter Mobile no: \t");
	scanf("%d",&mobile_no);
	printf("\n Enter the address:\t");
	scanf("%s",&address);
    return 0;
}
void main(void)
{
	char name[60];
	char pass[10],password[10]="mycap";
	
	
	printf("\n\n\t Enter password to login:");
	scanf("%s",pass);
	if(pass[i]==password[i])
	{
		printf("\n\n password match");
		for(i=0;i<=6;i++)
		{
			printf(".");
		}
		system("cls");
		;
	}
	else
    {
	printf("\n\n wrong password");
	printf("Enter 1 to rtry & 0 to exit");
	scanf("%d",&main_exit);
	if(main_exit==1)
	{
		system("cls");
		menu();
	}
	else if (main_exit=0)
	{
		system("cls");
		
	}
	else
	{
		printf("\n Invalid");
		
		system("cls");
		
	}
} }
    


