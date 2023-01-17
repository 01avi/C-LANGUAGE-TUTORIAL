#include<stdio.h>
char *display();
void main(){
	char *str;
	str=display();
	printf("String is:-%s",str);
}
char *display(){
	return "Aviral upadhyay";
}
