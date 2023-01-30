#include<stdio.h>
int avg(int[],int);
int main(){
	int i,b,s,marks[50];
	float a;
	printf("Enter size of array:-");
	scanf("%d",&b);
	for(i=0;i<b;i++){
		scanf("%d",&marks[i]);
	}
	a=avg(marks,b);
	printf("AVERAGE=%.2f\n",a);
}
int avg(int marks[],int a)
{
	int i,sum=0;
	int average=0;
	for(i=0;i<a;i++){
		sum=sum+marks[i];
	}
	average=sum/a;
	return average;
}
