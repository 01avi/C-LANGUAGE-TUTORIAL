#include<stdio.h>
main()
{
	float Z,B,C,SI;
  int A;
	printf("Enter the Principle Amount:- ");
	scanf("%d", &A);
	printf("Enter the Rate of interest:- ");
	scanf("%f", &B);
	printf("Enter Time period (IN YEARS):- ");
	scanf("%f", &C);
  
	SI= (A*B*C)/100;
  Z= SI+A;
  
  printf("\n");
	printf("Simple Interest of Ammount %d", A );
  printf(" Rupees for %f", C);
  printf(" Years is:- %f\n", SI);
  printf("Total Ammount with intrest is:- %f", Z);
	
}
