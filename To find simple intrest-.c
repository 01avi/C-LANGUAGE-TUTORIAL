#include<stdio.h>
main()
{
  float A,Z,B,C,SI;
    printf("Enter the Principle Amount:- ");
    scanf("%f", &A);
    printf("Enter the Rate of interest:- ");
    scanf("%f", &B);
    printf("Enter Time period (IN YEARS):- ");
    scanf("%f", &C);
  
  SI = ( A * B * C ) / 100 ;
  Z = SI + A ;
	if(SI != 0) {
		printf("\n"); 
                printf("- Simple Interest of Ammount %0.2f", A );
                printf(" Rupees for %0.2f", C);
                printf(" Years is:- %0.2f\n", SI);
                printf("- Total Ammount with intrest is:- %0.2f", Z);
        } else {
    	        printf("\n");
		printf("-You do not have to pay any ammount in form of Intrest\n");
		printf("- Total Ammount is:- %0.2f", Z);
	}
}
