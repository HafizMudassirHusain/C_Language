#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void cir(int x, int y, int r);
void main()
{

 int gd=DETECT,gm, x, y, r;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 cleardevice();
 clrscr();
 printf("enter position at x axis");
 scanf("%d",&x);
 printf("enter position at y axis");
 scanf("%d",&y);
 printf("enter radius of circle");
 scanf("%d",&r);

 cir(x,y,r);

getch();
}
  void cir(int x, int y, int r){
 circle(x,y,r);
  }
