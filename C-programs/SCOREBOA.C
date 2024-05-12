#include<stdio.h>
#include<conio.h>
    void main()
    {
    char match[5][14]={"YEAR","PAKSCORES","PAKWICKETS","ENGLANDSCORES","ENGLANDWICKETS"};
    int year[5]={1992,1993,1994,1995,1996};
    int paks[5]={120,123,145,140,145};
    int pakw[5]={5,9,10,2,5};
    int engs[5]={130,121,134,145,145};
    int engw[5]={4,3,2,5,6};
    int row,col,i,j,x,y=2,sum=0,sum1=0,tmatch=5;
    clrscr();
    for(row=0;row<=4;row++)
    {
    for(col=0;col<=13;col++){
    printf("%c",match[row][col]);
    }
    }



       gotoxy(1,y);

	   for(j=0;j<5;j++)
	     {
	      printf("%d\n", year[j]);
	     }
       y=1;



       for(i=0;i<5;i++)
	  {
	    gotoxy(17,y+1);
	   for(j=0;j<1;j++)
	     {
	       printf("%d\n", paks[i]);
	       sum=sum+paks[i];
	     }
	    y+=1;
	  }
       y=1;



       for(i=0;i<5;i++)
	  {
	    gotoxy(32,y+1);
	   for(j=0;j<1;j++)
	     {
	       printf("%d\n", pakw[i]);
	     }
	    y+=1;
	  }
       y=1;



       for(i=0;i<5;i++)
	  {
	    gotoxy(48,y+1);
	   for(j=0;j<1;j++)
	     {
	       printf("%d\n", engs[i]);
	       sum1=sum1+engs[i];
	     }
	    y+=1;
	  }
       y=1;



       for(i=0;i<5;i++)
	  {
	    gotoxy(65,y+1);
	   for(j=0;j<1;j++)
	     {
	       printf("%d\n", engw[i]);
	     }
	    y+=1;
	  }

     printf("\n");
    printf("Average score of all matches for Pakistan: %d\n",sum/5);
    printf("Average score of all matches for England: %d\n",sum1/5);
    printf("Number of matches played by the Pakistan: %d\n",tmatch);
    printf("Number of matches played by the England: %d\n",tmatch);
    getch();
    }