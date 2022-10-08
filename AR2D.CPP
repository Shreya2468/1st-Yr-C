#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
int a[3][3]={1,2,3,4,5,7,6,0,5};
for(i=0;i<=2;i++)
{
  for(j=0;j<=2;j++)
  {
     scanf("%d",&a[i][j]);
  }
}
for(i=0;i<=2;i++)
{
 for(j=0;j<=2;j++)
  {
      printf("%d\t",a[i][j]);
  }
  printf("\n");
}
getch();
}
