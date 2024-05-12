#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>


void main()
{  int i;
   struct student {
   char name[20];

    int age;
    int id;
   };

  clrscr();

   struct student mudassir={mudassir.name,mudassir.age,mudassir.id};
     printf("enter name: ");
  scanf("%s",&mudassir.name);
    printf("enter age: ");
  scanf("%s",&mudassir.age);
    printf("enter id: ");
  scanf("%s",&mudassir.id);
   printf("%s %i %i",mudassir.name, mudassir.age, mudassir.id);

  struct student basit = {"basit",22,148};
   printf("\n%s %i %i",basit.name, basit.age, basit.id);

 getch();
}
