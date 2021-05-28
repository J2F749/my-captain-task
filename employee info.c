#include<stdio.h>
#include<stdlib.h>

struct employee
{
	char name[30];
	char dept[30];
	int no;
	int empno;
	int salary;
};
int main()
{
  struct employee s[20];
 int i;
 printf("Enter the information of employee:\n");
 for(i=0;i<20;++i)
 {
 	s[i].no=i+1;
 	printf("Employee no. %d\n",s[i].no);
 	printf("name:");
 	scanf("%s",s[i].name);
 	printf("dept:");
 	scanf("%s",s[i].dept);
 	printf("empno:");
 	scanf("%d",&s[i].empno);
 	printf("salary:");
 	scanf("%d",&s[i].salary);
 	printf("\n");
 }
 printf("Information of Employee:\n\n");
 for(i=0;i<20;++i)
 {
 	printf("\nInformation for empno %d:\n",i+1);
 	printf("Name: ");
 	puts(s[i].name);
 	printf("salary:%d",s[i].salary);
 }
 return 0;
}
