#include<stdio.h>
#include<conio.h>
     float calcrent(float pmr, float rfty);
     float pmr,rfty;
     void main()
     {
     clrscr();
     calcrent(pmr,rfty);
     pmr=20000;
     rfty=6.5;
     printf("the rent for six n half month is: %.2f",calcrent(pmr,rfty));
     getch();
     }
     float calcrent(float pmr, float rfty)
     {
     float result;
     result=pmr*rfty*12;
     return result;


     }