#include<stdio.h>
#include<conio.h>
  void multi(int a, int b);
void main()
{
  int a,b;
  clrscr();
 printf("enter first value");
 scanf("%d",&a);

 printf("\n enter second value");
 scanf("%d",&b);

 multi(a,b);

  getch();

}
   void multi(int a, int b){

    printf("%d",a*b);

   }