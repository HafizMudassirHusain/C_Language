#include<stdio.h>
#include<conio.h>
     void main()
     {
     int series[5],i,find,count=0;
     clrscr();
     for(i=0;i<=4;i++){
     printf("enter five numbers: ");
     scanf("%d",&series[i]);
     }
    //-- printf("your given number is present in array: %d\n",series[i]);
     printf("enter a number you will find in array: ");
     scanf("%d",&find);
     for(i=0;i<=4;i++){
     if(find==series[i])
     {
     count++;
     }
     }
     printf("this number present is number of time:%d",count);
     getch();
     }
