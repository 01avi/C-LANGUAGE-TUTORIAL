#include<stdio.h>
main()
{
	int Y;
	printf("Enter Year: ");
	scanf("%d", &Y);
	
	
	if(Y%400==0)
	{
		printf("This is a leap year", Y);
	}
	else if(Y%100==0)
	{
		printf("This is not a leap year", Y);
	}
		else if(Y%4==0)
	{
		printf("This is a leap year", Y);
	}
	else
	{
		printf("This is not a leap year", Y);
	}

}
