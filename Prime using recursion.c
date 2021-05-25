#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool prime(int n);
bool prime(int n)
{
	int i=2;
	while(i*i<=n)
	{
		if(n%i==0)
		{
			return false;
		}
		i++;
	}
	return true;
}
int main()
{
	int n;
	printf("Enter any number.\n");
	scanf("%d",&n);
	bool ans=prime(n);
	if(ans==true)
	{
		printf("it is a Prime number");
	}
	else
	{
		printf("it is not a Prime number");
	}
	return 0;
}
