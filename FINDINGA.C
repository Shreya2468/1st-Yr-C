#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int A[10]={1,2,2,3,3,3,3,4,5,6},s,flag=0;
printf("enter value to be searched");
scanf("%d",&s);

for(i=0;i<=9;i++)
{
   if(A[i]==s)
   {
   printf("found at %d",i);
   flag=1;
   }
   else
   {if (flag!=1)
     {flag=0; }
   }
}
 if(flag==0)
 {
 printf("Not Found");
 }
getch();
}