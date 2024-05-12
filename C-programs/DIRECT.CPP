#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void direction(int direc);
	void main()
		{
		int direc;
		int gd=DETECT, gm;
		initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

		direction(direc);
		getch();
		closegraph();
		}
void direction(int direc)
	{
	int i;
	int a=320, b=240, radius=50;
	printf("you can move right side press 1\n");
	printf("you can move left side press 2\n");
	printf("you can riase the radis of circle press 3\n");
	printf("enter number: ");
	scanf("%d",&direc);
	for(i=1;i<=10;i++)
		{
		if(direc==1)
		      {
			cleardevice();
			circle(a,b,radius);
			a+=10;
			delay(500);
		       }
		else if(direc==2)
		       {
			cleardevice();
			circle(a,b,radius);
			a-=10;
			delay(500);
			}
		 else {
			cleardevice();
			circle(a,b,radius);
			radius+=10;
			delay(500);
		       }


		 }
	 }



