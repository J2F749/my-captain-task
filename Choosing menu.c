#include<stdio.h>
main()
{
    int menu=0;	
	printf("Choose the menu : \n"); 
	printf("1.Rice Bowl.\n");
	printf("2.Biriyani.\n");
	printf("3.Omelette.\n");
	printf("4.Chef speacil.\n");
	scanf("%d",&menu);

	switch(menu)
		{
			case 1:
				printf("Rice Bowl-Rs50");
				break;
			case 2:
				printf("Biriyani-Rs100");
				break;
			case 3:
				printf("Omelette-Rs45");
				break;
			case 4:
			printf("Chef speacil-Rs150");
			   break;
			default:
			printf("Contact the Restaurnt");	
		}
}
