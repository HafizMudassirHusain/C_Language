#include<stdio.h>

	   void displaymenu(void);
	   void main()
	   {
	   clrscr();
	   displaymenu();
	   getch();

	   }


 void displaymenu(void)
 {
 int i,j;
 char ch[4][12]={"large Pizza","small Pizza","Pizza","whiteChicken"};
 for(i=0;i<=5;i++)
 {
 printf("%d) %c\n",i+1,ch[i][j]);
 }
 }
