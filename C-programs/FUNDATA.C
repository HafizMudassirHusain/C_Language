#include<stdio.h>

	   void retrivedata(void);
	   void main()
	   {
	   clrscr();
	   retrivedata();
	   getch();

	   }


 void retrivedata()
 {
 int i;
 char ch[6]={'A','R','R','f','S','N'};
 for(i=0;i<=5;i++)
 {
 printf("%d) %c\n",i+1,ch[i]);
 }
 }
