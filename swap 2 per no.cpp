#include<stdio.h>
main()
{ 
int a=7,b=4;
printf("swapping a and b\n: ");
printf("%d,&a");
printf("%d,&b");

a=a+b;
b=a-b;
a=a-b;
printf("a=%d\n b=%d\n", a,b);
 return(0); 
}

