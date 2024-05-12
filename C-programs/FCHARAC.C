#include<stdio.h>
#include<conio.h>
 void character(char a[], char b[], char c[],char d[]);

       void main()
       {
       clrscr();
       character("hafiz husian","mudassir","husain","basit");
       getch();

       }

 void character(char fst[], char snd[], char trd[],char fth[])
 {
  char first[20]={"hafiz husain"};
  char second[20]={"mudassir"};
  char third[20]={"husain"};
  char fourth[20]={"basit"};
  printf("\t%s %s %s %s",first,second,third,fourth);

 }

   /* void character(char f[],char s[], char t[]);

       void main()
       {
       clrscr();
       character(,second,third);
       getch();

       }

 void character(char fst[], char snd[], char trd[])
 {
  char first[20]={"hafiz"};
  char second[20]={"mudassir"};
  char third[20]={"husain"};

 }*/
