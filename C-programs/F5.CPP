#include<stdio.h>
#include<conio.h>
float sub(float sub1,float sub2,float sub3,float per);
void main()
{
clrscr();
sub(100,100,100,300);
 getch();

}
float sub(float sub1,float sub2,float sub3,float per){
printf("the percentage is = %.2f",((sub1+sub2+sub3)/per)*100);
}