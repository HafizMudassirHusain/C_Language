#include<stdio.h>
#include<dos.h>

     void main()
	{
	  int hensFarms = 3;
	  int chickenFarms = 3;
	  int hensSheds = 3;
	  int chickenSheds = 3;
	  int noofchickenpershed = 500;
	  float noofhenspershed = 500;
	  int eggprice=10;
	  int incomeEggs;
	  float expenseEggs = 15.5;
	  float expenseofdamage = (((noofhenspershed*341)*10)/100)*expenseEggs;
	  float incomewithoutexpense;
	  float laborexpense;
	  float foodexpense;
	  float otherexpense;
	  clrscr();

	  printf("CALCULATION OF QUESTION 1");
	  printf("\nincome from eggs per month per shed = %f", (noofhenspershed*eggprice)*(30-8));
	  printf("\nincome from eggs per quarter per shed = %f", ((noofhenspershed*eggprice)*(120-32)));
	  printf("\nincome from eggs 6 months per shed = %f", (noofhenspershed*eggprice)*(180-48));
	  printf("\nincome from eggs per year per shed = %f\n\n", ((noofhenspershed*eggprice)*(365-96)));

	  printf("\nCALCULATION OF QUESTION 2");
	  printf("\n Income of all sheds per month =%f", (((noofhenspershed*eggprice)*(30)*6)));
	  printf("\n Income of all sheds per quarter =%f", (((noofhenspershed*120)*eggprice)*6));
	  printf("\n Income of all sheds per 6 months =%f", (((noofhenspershed*180)*eggprice)*6));
	  printf("\n Income of all sheds per year =%f\n\n", (((noofhenspershed*365)*eggprice)*6));

	  printf("\ncalculation of question 3");
	  printf("\n no of chickens per shed =%d", noofchickenpershed);
	  printf("\n no of chickens in all sheds =%d\n\n", noofchickenpershed*6);
	  delay(3000);
	  printf("\nCALCULATION OF QUESTION 4");

	  printf("\nincome from eggs per month per shed after death = %f", ((noofhenspershed)*(30-2)*(eggprice)));
	  printf("\nincome from eggs per quarter per shed after death = %f", (noofhenspershed*(120-8))*10);
	  printf("\nincome from eggs 6 months per shed after death = %f", ((noofhenspershed*180-12)*10));
	  printf("\nincome from eggs per year all sheds after death = %f\n\n", ((noofhenspershed*365-24)*10));

	  printf("\nCALCULATION OF QUESTION 5");
	  printf("\nTotal expense per year as damage of eggs = %f\n\n", expenseofdamage);
	  printf("\nCALCULATION OF QUESTION 6");
	  incomewithoutexpense = ((noofhenspershed*341)*10)-(((noofhenspershed*341)*10)/100)*expenseEggs;
	  printf("\n total income without expense = %f",incomewithoutexpense);
	  laborexpense = ((incomewithoutexpense/100)*10);
	  printf("\ntotal income excluding 10 percentage of labor expense only = %f",laborexpense );
	  foodexpense = ((incomewithoutexpense/100)*15);
	  printf("\ntotal income excluding 15 percentage of food expense only = %f",foodexpense );
	  otherexpense = ((incomewithoutexpense/100)*5);
	  printf("\ntotal income excluding 5 percentage of other expense only = %f",otherexpense );
	 // printf("\n\n\n\n\n\n\n");

   getch();
}
