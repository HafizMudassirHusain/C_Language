#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\Turboc3\\bgi");
cleardevice();
circle(320,240,50);
setcolor(2);
circle(getmaxx()/2,getmaxy()/2,100);
setcolor(12);
line(320,240,320-99,240);
setcolor(9);
circle(320,240,8);
setcolor(13);
circle(320-50,240,8);
setcolor(2);
circle(320-75,240,8);
setcolor(14);
line(320-75,240,320-75,240+65);
setcolor(GREEN);
circle(320-100,240,8);
setfillstyle(1,0);
floodfill(220+2,240,2);
getch();
closegraph();

}