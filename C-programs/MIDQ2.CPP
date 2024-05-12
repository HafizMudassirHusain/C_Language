#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,count=0;
int num[5];
clrscr();
  for(i=0; i<=4; i++)
  {
    printf("\ninsert values in array");
    scanf("%d", &num[i]);
  }
  printf("give a number to count");
  scanf("%d", &n);
   for(i=0; i<=4; i++)
  {
    printf("\n values provided by user = [%d]", num[i]);
    if(n==num[i])
    {
     count++;
    }
  }
  printf("\n the value [%d] is available in the array = [%d] number of time",n,count);

getch();
}
