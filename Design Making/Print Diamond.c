#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter Diamond Size:- ");
	scanf("%d", &n);

            //upper half;
                for(i=1;i<=n;i++){
            //spaces;
                   for(j=1;j<=n-i;j++){
                      printf(" ");
                  
                }
            //stars;
                for(j=1;j<=2*i-1;j++){
                    printf("*");
                }  
                     printf("\n");  
           }
            //lower half;
                for(i=n;i>=1;i--){
            //spaces;
                   for(j=1;j<=n-i;j++){
                      printf(" ");
             
           }
           //stars;
           for(j=1;j<=2*i-1;j++){
                 printf("*");
           }  
               printf("\n");  
    }
     
}
    

