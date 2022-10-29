#include<stdio.h>
 int evensum(int a,int b)
   {
 	if(a%2==0)
 	   a=a;
 	else
 	   a=a+1;
    printf("sum of even number %d",sum(a,b));
   }
 int oddsum(int a,int b)
   {
 	if(a%2==0)
 	   a=a+1;
 	else 
 	   a=a;
    printf("sum of odd number %d",sum(a,b));
   }
 int sum(int a,int b)
 {
  if(a>b)
  return 0;
  else
  return a+sum(a+2,b);
 }
  int main() {

  int a,b,ch;
  printf("Enter first number: ");
  scanf("%d",&a);
  printf("Enter last number: ");
  scanf("%d",&b);
  while(1)
  {
  	printf("enter: 1 for even sum and 2 for odd sum");
  	scanf("%d",&ch);
  	switch(ch){
  	case 1: evensum(a,b);
  	break;
  	case 2: oddsum(a,b);
  	break;
  	default : printf("\n invelid choice");
	}
}
}
