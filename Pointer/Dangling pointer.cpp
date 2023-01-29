#include <Stdio.h>
int main(){
	int *ptr;
	{
		int a=10;
		ptr=&a;
		printf("a in scope=%d\n",*ptr);
	}
	 printf("a outside the scope=%d",*ptr);
}
