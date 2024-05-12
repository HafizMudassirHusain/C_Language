#include<stdio.h>
#include<conio.h>

	  void main()
	  {

	  int day,year;
	  clrscr();
	  printf("enter day number: ");
	  scanf("%d",&day);
	  printf("enter year: ");
	  scanf("%d",&year);
	  switch(day){
	  case 1:
	  printf("monday");
	  break;
	    switch(year){
	  case 8:
	  printf("2001");
	  break;
	  case 9:
	  printf("2002");
	  break;
	  case 12:
	  printf("2003");
	  break;
	  case 14:
	  printf("2004");
	  break;
	  case 15:
	  printf("2005");
	  break;
	 // default:
	//  printf("your year is not matched");

	  }
	   case 2:
	  printf("tuesday");
	  break;
	   case 3:
	  printf("wednesday");
	  break;
	   case 4:
	  printf("thursday");
	  break;
	  case 5:
	  printf("friday");
	  break;
	  case 6:
	  printf("saturday");
	  break;
	   case 7:
	  printf("sunday");
	  break;
	  default:
	  printf("not found");
	  }
	  getch();
	  }