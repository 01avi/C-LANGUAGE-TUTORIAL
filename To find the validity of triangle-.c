#include<stdio.h>
main()
{
	int Angle1, Angle2, Angle3, SUM;
	printf("Enter Angle 1 of triangle:-\n ");
	scanf("%d", &Angle1);
	printf("Enter Angle 2 of triangle:-\n ");
	scanf("%d", &Angle2);
	printf("Enter Angle 3 of triangle:-\n ");
	scanf("%d", &Angle3);
	
	SUM=Angle1+ Angle2+ Angle3;
	
	if(SUM==180 && Angle1>0 && Angle2>0 && Angle3>0){
		
		printf("This triangle is valid");
		
	}else if(Angle1==60 || Angle1==90 && Angle2==60 || Angle2==90 && Angle3==60|| Angle3==90){
		
		printf("This triangle is valid and it is a right angle triangle");
		
	}else{
		
		printf("This triangle is not valid");
	}
}
