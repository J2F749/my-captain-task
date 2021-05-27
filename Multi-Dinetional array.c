#include<stdio.h>
int main()
{
	int a[3][3]={{1,2,3,},{4,5,6},{7,8,9}};
	int i=0,j=0,row,col;
	int sum=0;
	
	printf("Matrix rows:");
	scanf("%d",&i);
	printf("Matrix column:");
	scanf("%d",&j);
	
	for(row=0;row<i;row++)
     {
     	for(col=0;col<j;col++)
     	{
     	    printf("Enter the elements of matrix: %d \n",a[row][col]);	
		 }
	 }
	 printf("Matrix is:\n");
	 for(row=0;row<3;row++)
	 {
	 	for(col=0;col<3;col++)
	 	{
	 		
			 printf("%d\t",a[row][col]);
		 }
		 printf("\n");
	 }
	 for (row=0;row<i;row++)
	 {
	 	
	 	
	 		sum =sum + a[row][row];
	 }
	 	 printf("sum of all diagonal elements is:%d",sum);
	return 0;
}
