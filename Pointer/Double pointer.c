#include<Stdio.h>
void main(){
	int a=20,b=10;
	int *p=&a, *q=&b;;
	int **r=&q , **s=&p;
	printf("Value of a is:- %d\n",a); //20
	printf("Value of b is:- %d\n",b); //10
	printf("Value of p is:- %d\n",*p); //20
	printf("Value of q is:- %d\n",*q); //10
	printf("Value of r is:- %d\n",**r); //10
	printf("Value of s is:- %d\n",**s); //20
	
	**s=30;
	**r=40;
	printf("\n");
	printf("Value of a is:- %d\n",a); //30
	printf("Value of b is:- %d\n",b); //40
	printf("Value of p is:- %d\n",*p); //30
	printf("Value of q is:- %d\n",*q); //40
	printf("Value of r is:- %d\n",**r); //40
	printf("Value of s is:- %d\n",**s); //30
	
}
