#include<stdio.h>
main()
{
	int n,i,j,y;
	printf("Enter right angle length:- ");
	scanf("%d", &n);

      for( i=1;i<=n;i++) {
            for( j=1;j<=i;j++) {
             y=i+j;
            if(y%2==0){
               printf("1 ");
            } 
			else {
               printf("0 ");
          }
    }
    printf("\n");
  
}
}
