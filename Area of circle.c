#include<stdio.h>
main()
{
	 float p=3.14;
	 float R,A;
	     printf("PLEASE ENTER THE VALUE OF THE RADIOUS OF CIRCLE:- ");
	     scanf("%f", &R);
         if(R>=0){
	         A= p*R*R;
             printf("AREA OF THE CIRCLE IS:- %f", A);
        }else{
	        printf("Enter valid radius!!!");
    }
}
  
