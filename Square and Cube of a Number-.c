#include<stdio.h>
main()
{
  int i;
  printf("PRESS 1 FOR SQUARE:- \n");
  printf("PRESS 2 FOR CUBE:- \n");
 
  scanf("%d",&i);
  
  if(i==1)
  {
     float a,sq;
     printf("ENTER ANY NUMBER YOU WANT TO SQUARE :-");
     scanf("%f",&a);
     
     sq=a*a;
     printf("SQUARE OF THE NUMBER IS :- %f",sq);
    }
    else if(i==2)
    {
     float b,q;
     printf("ENTER ANY NUMBER YOU WANT TO CUBE :- ");
     scanf("%f",&b);
     
     q=b*b*b;
     
     printf("CUBE OF THE NUMBER IS :- %f",q);
    }
    else
    {
    printf("INVALID INPUT!!");
 }
}
