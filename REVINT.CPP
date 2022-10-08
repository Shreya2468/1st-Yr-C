#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int i,reverse=0,remainder;

printf("Enter an integer:");
scanf("%d",&i);

while(i !=0)
{
remainder = i % 10;
reverse = reverse * 10 + remainder;
i /= 10;
}

printf("Reversed number = %d", reverse);

getch();
}
