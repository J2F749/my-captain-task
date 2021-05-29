#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
    char Str[100], RevStr[100];
    int i,j,size;
    	
	fp=fopen("reverse.txt","w");
    fprintf(fp,"My captain");
    fclose(fp);
    printf("TO be reversed");
    gets(Str);
    
    j=0;
    size=strlen(Str);
    for (i=size-1;i>=0;i--)
    {
    	RevStr[j++] = Str[i];
	}
	RevStr[i]='\0';
	printf("\n output = %s", RevStr);
	return 0;
}
