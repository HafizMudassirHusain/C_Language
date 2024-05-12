#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
 void ln(int x1, int y1, int x2, int y2);
void main()
{
   int gd=DETECT,gm,x1,y1,x2,y2;
   initgraph(&gd,&gm, "C:\\TURBOC3\\BGI");
   cleardevice();
   printf("enter position x1");
   scanf("%d",&x1);
   printf("enter position y1");
   scanf("%d",&y1);
   printf("enter position x2");
   scanf("%d",&x2);
   printf("enter position y2");
   scanf("%d",&y2);

   ln(x1,y1,x2,y2);
   getch();
   closegraph();

}
   void ln(int x1, int y1, int x2, int y2)
   {

    line(x1,y1,x2,y2);

   }