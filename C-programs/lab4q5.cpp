#include<stdio.h>
#include<conio.h>
int main()
{
int num;
clrscr();
printf("enter number :");
scanf("%d",&num);
int rem=num%2;
  if (rem==0)
{
 printf("%d is Even number",num);
}
 else
{
 printf("%d is Odd number",num);
}
getch();
}
