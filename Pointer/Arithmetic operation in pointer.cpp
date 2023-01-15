#include<stdio.h>
int main(){
	int d,*p,*q;
	int a[]={1,2,3,4,5,-6,-7,-8};
	p=&a[0];
	q=&a[7];
	printf("Address of q is:- %d\n",q);
	printf("Address of p answer is:- %d\n",p);
	d=p-q;
	printf("d=p-q answer is:- %d\n",d);
	
	q=q-2;
	printf("q=q-2 answer is:- %d\n",q);
	
	*q=25;
	d=q-p;
	printf("d=q-p answer is:- %d\n",d);
	
	*p=27;
	q=q-3;
	printf("q=q-3 answer is:- %d\n",q);
	
	p=p+3;
	printf("p=p+3 answer is:- %d\n",p);
	
	d=p-q;
	printf("d=q-p answer is:- %d\n",d);
	
	
}
