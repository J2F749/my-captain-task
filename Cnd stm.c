#include<stdio.h>
main()
{
	int mark;
	printf("\n Enter mark:");
	scanf("%d",&mark);
	
	if(mark>85)
	{
	  printf("Grade A");
	  }
	 else if(mark>70 && mark<=84)
	 {
	   printf("Grade B");
	   }
	   else if(mark>55)
	   {
	   	printf("Grade C");
		} 
		else if(mark>40)
		{ 
		printf("Grade D");
		}
		else
		{
			printf("Grade F");
		}

   return(0);
}

