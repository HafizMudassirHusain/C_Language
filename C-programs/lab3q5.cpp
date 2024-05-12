#include <stdio.h>
int main()
{	
clrscr();	
    int i, n, sum=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=2; i<=n; i+=2)
    {
        sum += i;
    }
    printf("Sum of all even number between 1 to %d = %d", n, sum);
getch();
}
