#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20];
char name2[20];
int i,j,sum=0,total=0;
clrscr();
printf("Enter name:  ");
gets(name);
printf("Enter name 2:  ");
gets(name2);

for(i=0;i<=strlen(name);i++)
{
//printf("%c=[%d]\n", name[i],name[i]);
sum=sum+name[i];
}
printf("sum of ASCII code name 1 :%d",sum);

for(j=0;j<=strlen(name2+1);j++)
{
total=total+name2[j];
}
printf("\n total ASCII code of name 2: [%d]",total);
if(sum>total){
 printf("\nSUM-Total:%d",sum-total);
 }
 else
 {
 printf("\nTotal-Sum: %d",total-sum);
 }
getch();
}