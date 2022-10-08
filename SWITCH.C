#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
int ch=0,x=1,y=2,z;
clrscr();
do{
printf("choice based menu program");
printf("\n press 1 for addition");
printf("\n press 2 for subtraction");
printf("\n press 3 for multiplication");
scanf("%d",&ch);
switch(ch)
{
case 1: z=x+y;
	printf("% d",z);
	break;
case 2: z=x-y;
	printf("%d",z);
	break;

case 3: z=x*y;
	printf("%d",z);
	break;
case 0: exit(0);
default:printf("default case");break;
}
}while(1);
}
















