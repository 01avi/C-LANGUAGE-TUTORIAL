#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character:- ");
	scanf("%C", &ch);
	
	if(ch >='a' && ch <='z')
	{
		printf("'%C' is a lowercase alphabet.",ch);
	}
	else if(ch >='A' && ch <='Z')
	{
		printf("'%C'character is a uppercase alphabet.",ch);
	}
	else
	{
		printf("'%C'this is not alphabet");
	}
	
}
