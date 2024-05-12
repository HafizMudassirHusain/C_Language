#include<stdio.h>
#include<conio.h>

    void main()
      {
       int year[5]={1992, 1993, 1994, 1995, 1996};
       int pakscore[5]={120, 123, 145, 140, 145};
       int pakwicket[5]={5, 9, 10, 2, 5};
       int engscore[5]={130, 121, 134, 145, 149};
       int engwicket[5]={4, 3, 2, 5, 6};
       int i, j, y=1;
       clrscr();


       gotoxy(1,y);
       printf("YEAR \n");
	   for(j=0;j<5;j++)
	     {
	      printf("%d\n", year[j]);
	     }
       y=1;
       gotoxy(8, y);
       printf("PakScore \n");
       for(i=0;i<5;i++)
	  {
	    gotoxy(8,y+1);
	   for(j=0;j<1;j++)
	     {
	       printf("%d\n", pakscore[i]);
	     }
	    y+=1;
	  }
       y=1;
       gotoxy(18, y);
       printf("PakWickets \n");
       for(i=0;i<5;i++)
	  {
	    gotoxy(20,y+1);
	   for(j=0;j<1;j++)
	     {
	       printf("%d\n", pakwicket[i]);
	     }
	    y+=1;
	  }
       y=1;
       gotoxy(38, y);
       printf("EngScore \n");
       for(i=0;i<5;i++)
	  {
	    gotoxy(40,y+1);
	   for(j=0;j<1;j++)
	     {
	       printf("%d\n", engscore[i]);
	     }
	    y+=1;
	  }
       y=1;
       gotoxy(50, y);
       printf("EngWickets \n");
       for(i=0;i<5;i++)
	  {
	    gotoxy(55,y+1);
	   for(j=0;j<1;j++)
	     {
	       printf("%d\n", engwicket[i]);
	     }
	    y+=1;
	  }



       getch();
      }