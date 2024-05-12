#include<stdio.h>
#include<conio.h>
int fact(int no);
void main()
{
 int no;
 clrscr();

 printf("Enter the number\n");
 scanf("%d",&no);

 printf("Factorial of given number is %d",fact(no));
 getch();
}
int fact(int no)
{
   if(no<=1)
   {
    return 1;
   }
   else
   {
    no=no*fact(no-1);
    return no;
   }
}
