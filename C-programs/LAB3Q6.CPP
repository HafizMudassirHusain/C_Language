#include <stdio.h>
#include<conio.h>
#include <math.h>
void main()
{
    int i,n;
    clrscr();
    printf("Enter a number N : ");
    scanf("%d",&n);
    printf("No \tSquare \tCube \tSqrRoot\n",n);
    for(i=1;i<=n;i++)
    {
    printf("%d\t %d\t %d\t %.2f\n",i,(i*i),(i*i*i),sqrt((double)i));
    }  
    getch();
}
