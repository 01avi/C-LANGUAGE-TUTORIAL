#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter Pyramid Length:- ");
	scanf("%d", &n);
	
	       //upper half;

        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
              printf("*");
        }

        int space=2*(n-i);
        for(j=1;j<=space;j++){
            printf(" ");
        }

        for(j=1;j<=i;j++){
            printf("*");
        }

           printf("\n");
        }
               
             //lower half;

        for(i=n;i>=1;i--){
            for(j=1;j<=i;j++){
              printf("*");
           }

        int space=2*(n-i);
        for(j=1;j<=space;j++){
           printf(" ");
        }

        for(j=1;j<=i;j++){
           printf("*");
        }

           printf("\n");
   }
}
       
