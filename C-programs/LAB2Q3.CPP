#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int num1,num2,ptr1,ptr2,result;
printf("Enter num1:");
scanf("%d",&num1);
printf("\nEnter num2:");
scanf("%d",&num2);
ptr1=num1;
ptr2=num2;
result=ptr1+ptr2;
printf("\n Addition=%d",result);
result=ptr1-ptr2;
printf("\n Subtraction=%d",result);
result=ptr1*ptr2;
printf("\n Multiplication=%d",result);
result=ptr1/(ptr2);
printf("\n Division=%d",result);
getch();
}
