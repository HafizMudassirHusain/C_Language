#include<stdio.h>
#include<conio.h>  
void main(void)  
 { 
  int x=3,y=4,z=6;   
 int *p1,*p2,*p3;    p1=&x;    p2=&y;    p3=&z;
clrscr();  
 *p1=*p2+*p3;  
 *p1++;  
 *p2--;  
 *p1=(*p2)*(*p3);  
 *p2=(*p2)*(*p1);  
 x=y+z;   
 printf(“%d”,x);   
 printf(“%d”,y);    
printf(“%d”,z);   
 printf(“%d”,*p1);   
 printf(“%d”,*p2);   
 printf(“%d”,*p3);  } 
getch();     
}