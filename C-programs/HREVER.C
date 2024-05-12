#include<stdio.h>
#include<conio.h>

	void main()
	{
	char name[10]="hafiz";
	char fname[10]="moqeem";
	clrscr();
	printf("name %s\n",strcpy(fname,name));
	printf("father name %s",strcpy(name,fname));
	getch();
	}