#include<stdio.h>

int addNumbers(int n)
{
	if(n==0)
	   return 0;
	else
	   return (n%10 + addNumbers(n/10)); 
}
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	printf("sum = %d",addNumbers(num));
	return 0;
   }   
