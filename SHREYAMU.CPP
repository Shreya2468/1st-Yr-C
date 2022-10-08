#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,t;
int x[10];
clrscr();
for(i=0;i<=9;i++)
{
scanf("%d",&x[i]);
}

for(i=0,j=9;i<=4;i++,j--)
{
t=x[i];
x[i]=x[j];
x[j]=t;
}





for(i=0;i<=9;i++)
{
printf("%d",x[i]);
}
getch();
}