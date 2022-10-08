#include<stdio.h>
#include<conio.h>
void main()
{
int x,y;
clrscr();
scanf("%d%d",&x,&y);
y=x+y;
x=y-x;
y=y-x;

printf("%d",x);
printf("\n%d",y);
getch();
}