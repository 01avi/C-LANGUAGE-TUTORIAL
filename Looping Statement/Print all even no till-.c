#include<stdio.h>
main()
{
	int i,n;
	printf("PRINT ALL EVEN NUMBERS TILL:- ");
	scanf("%d", &n);
	printf("EVEN NUMBERS FROM 1 TO %d:- \n", n);
	for(i=1; i<=n; i++)
	{
		if(i%2!=1)
		{
		  printf("%d\n",i);
		}
	}
}

