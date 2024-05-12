#include<stdio.h>
#include<conio.h>
#include<string.h>
    void main()
    {
     int i;
     char name[15] = "Hafiz Mudassir";
     clrscr();
     printf("%s\n",name);
     printf("reversed name: ");
     for(i=strlen(name)-1;i>=0;i--)
     {
      printf("%c",name[i]);
     }

     getch();
    }