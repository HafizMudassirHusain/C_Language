#include<stdio.h>
#include<conio.h>
 int table(int tno,int tend);
void main()
{
  int tno, tend;
  clrscr();
  printf("enter table number");
  scanf("%d",&tno);
  printf("\nenter the end number");
  scanf("%d", &tend);
    table(tno,tend);// calling the function
  getch();
}
  int table(int tno,int tend){
   int i;
   for(i=0; i<=tend; i+=tno)
   {
   printf("\n %d",i);

   }
     return 0;

  }