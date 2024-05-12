#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{	
int a,b;
int ch;
clrscr();
printf("\nEnter a and b :");
scanf("%d%d",&a,&b);
printf("\nEnter operation to be performed\n1. +\n2. -\n3. *\n4. /\n5. %%\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf(" %d + %d = %d",a,b,a+b);
break;
case 2:printf(" %d - %d = %d",a,b,a-b);
break;
case 3:printf(" %d * %d = %d",a,b,a*b);
break;
case 4:printf(" %d / %d = %.2f",a,b,a/b);
break;
case 5:printf(" %d",a%b);
break;
default:printf("\nEnter valid numbers or operator");
}
getch();
}
