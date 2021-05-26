#include<stdio.h>

int find_lcm( int a, int b, int max);
int main()
{
	int a,b,max;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
        scanf("%d",&b);
        printf("The LCM of %d and %d is %d",a,b,max);
        return 0;
}
int find_lcm(int a, int b, int max)
{
	if(max%a==0 && max%b==0)
        {
	  return (max=(a>b)?a:b);  
	}
	else
	{
	  return ++max; 
        }
        return 0;
}

    
