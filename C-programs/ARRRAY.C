#include<stdio.h>
#include<conio.h>
	  void main()
	  {
	  //----------------ARRAY 01-----------------------
	/*   finding specific adderess value
	  int a[8]={1,2,4,9,5,6,7,8};
	  clrscr();
	  printf("%d\t",a[4]);
	  getch();*/

	  //----------------Array 02------------------------
	//  print the array values through the loop
	 /* int series[10]={20,30,40,50,6,78,89,12,23,34};
	  int i;
	  clrscr();
	  for(i=0;i<=9;i++)
	  {
	  printf("%d\t",series[i]);
	  }
	  getch();*/

	  //--------------------Array 03----------------------
       /*   ------------2D-ARRAY----------------------
	  int num[4][5]={1,2,3,4,2,
			 4,5,6,7,8,
			 8,9,7,6,3,
			 4,3,2,1,4};
	 int i,j;
	 clrscr();
	 for(i=0;i<=3;i++)
	 {
	 for(j=0;j<=4;j++)
	 {
	 printf("[%d]",num[i][j]);
	 }
	 printf("\n");
	 }
	 getch();------------------------------------*/

      //   ------------------Array-04---------------------
      /*	  char name[5][5]={"Basit","Abbas","Hafiz","Talha","Samad"};
	  int row,col,sum=0;
	  clrscr();
	  for(row=0;row<=4;row++)
	  {
	  for(col=0;col<=4;col++){
	  printf("%c",name[row][col]);
	  sum=sum+name[row][col];
	  }

	  printf("\tThe ASCII code of this name: %d",sum);
	  sum=0;
	  printf("\n");
	  }

	  getch();----------------------------------------*/

	 // ---------------ARRAY-05-----------------------
      //  finding array
	  char name[17]={'b','a','s','i','t','a','n','a','s','m','u','d','a','s','s','i','r'},find;
     int row,count=0;
     clrscr();
     printf("Enter to get a alphabat: ");
     scanf("%c",&find);
     for(row=0;row<=16;row++)
     {

     if(find==name[row])
     {
     count++;
     }


     }
	printf("this alphabat is present in array  %d No of time \n",count);
     getch();


	 }

