#include<stdio.h>
#include<conio.h>
	 void main()
	 {
	 struct student{
	 char name[20];
	 char sec[5];
	 char department[20];
	 int roll;
	 };
	 int i;
	 struct student s[2];
	 clrscr();

	 for(i=1;i<=2;i++)
	 {
	 printf("enter name: ");
	 scanf("%s",&s[i].name);
	 printf("enter secction: ");
	 scanf("%s",&s[i].sec);
	 printf("enter department: ");
	 scanf("%s",&s[i].department);
	 printf("enter roll: ");
	 scanf("%d",&s[i].roll);
	  };

	  for(i=1;i<=2;i++){
	 printf("name: %s ",s[i].name);

	 printf("section: %s ",s[i].sec);

	 printf("department: %s ",s[i].department);

	 printf("roll no: %d ",s[i].roll);
	 printf("\n");
	 }

	 getch();
	 }







