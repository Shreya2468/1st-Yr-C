#include<stdio.h>
#include<conio.h>
void main()
{
intx[10],i;
clrscr();

for(i=0;i<=9;i++)
{
scanf("%d,&x[i]);
}
for(i=9;i>=0;i--)
{
printf("\n %d",x[i]);
}
getch();
}