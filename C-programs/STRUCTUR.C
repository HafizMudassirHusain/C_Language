#include<stdio.h>
#include<conio.h>

	    void main()
	      {

	    struct students{
	    char name[30];
	    char sec;
	    int roll,age;
	     };
	      struct students s3 ={"basit",'C',148,22};
	      struct students s2 ={"Taha",'C',102,19};
	      struct students s1={"Hafiz Muhammad Mudassir Husain",'C',145,21};
	      struct students s4;
	      struct students s5;
	      clrscr();

	      printf("Name: %s ,section :%c, roll no: %d, age: %d\n",s1.name,s1.sec,s1.roll,s1.age);
	      printf("Name: %s,section :%c, roll no: %d, age: %d\n",s2.name,s2.sec,s2.roll,s2.age);
	      printf("Name: %s,section :%c, roll no: %d, age: %d\n",s3.name,s3.sec,s3.roll,s3.age);

	      s4 = s1;
	      printf("Name: %s ,section :%c, roll no: %d, age: %d\n",s4.name,s4.sec,s4.roll,s4.age);

	      strcpy(s5.name,"Abbas");
	      printf("innocent friend with parhanay lekhnay walay :%s",s5.name);


	      getch();
	      }
