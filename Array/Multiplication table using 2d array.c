#include<stdio.h>
int main()
{
	int b,row,coloumn,s;
	int a=10;
	
        printf("Enter starting point:- ");
	scanf("%d",&s);

	printf("Enter last point:- ");
	scanf("%d",&b);

	int mul[a][b];
	int i,j;
	printf("\n");
	printf("MULTIPLICATION TABLE IS:-");
	for(j=s;j<=b;j++){
	       printf("\n");
               for(i=0;i<a;i++){
			row=i+1;
			printf("%2d|",row);
			for(j=s;j<=b;j++){
				coloumn =j;
				mul[i][j]=row*coloumn;
				printf("%4d",mul[i][j]);
			}
			printf("\n");
		}
		
	}

}
