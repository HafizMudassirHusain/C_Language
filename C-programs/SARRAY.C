#include<stdio.h>
#include<conio.h>
     void main (){
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









