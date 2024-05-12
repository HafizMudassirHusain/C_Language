#include<conio.h>
#include<stdio.h>

int main()
{
  char name[20],gender[20]; 
  float height,age; 
  
  printf("\n\n\t\t Enter Your name " );
  scanf("%s", &name);

  printf("\n\n\t\t Enter your gender ");
  scanf("%s", &gender);

  printf("\n\n\t\t Enter Your Age ");
  scanf("%f", &age);

  printf("\n\n\t\t Enter Your Height ");
  scanf("%f", &height);
getch();
}
