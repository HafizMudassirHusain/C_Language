#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
       void main(){
	    //label in C


	    int a,b;
	    char choice,yn;
	    top:
	    clrscr();

	    printf("Enter firct number: ");
	    scanf("%d",&a);
	    printf("enter second value: ");
	    scanf("%d",&b);
	    printf("Chose operator : ");
	    scanf("%c",&choice);
	    choice=getche();
	    if(choice=='+'){
			 goto plus;
			   }
	    else if(choice=='-'){
			goto minus;
			  }
	    else if(choice=='*'){
			goto multiply;
			  }
	     else if(choice=='/'){
			goto divide;
			  }



	    plus:
	    printf("total =%d\n ",a+b);
	    printf("\nDo You want to use calculaye again: ");
	    scanf("%c",&yn);

	    if((yn=='Y')||(yn=='y')){
		       goto top;
		       }
	    else{
		 exit(0);
		 }

	    minus:
	    printf("total = %d\n", a-b);
	    printf("\nDo you want to use calculate again: ");
	    scanf("%d",&yn);

	    if((yn=='Y')||(yn=='y')){
		       goto top;
		       }
	    else {
		  exit(0);
		  }


	    multiply:
	    printf("total =%d\n ",a*b);
	    printf("\nDo You want to use calculaye again: ");
	    scanf("%c",&yn);

	    if((yn=='Y')||(yn=='y')){
		       goto top;
		       }
	    else{
		 exit(0);
		 }

	    divide:
	    printf(" a divided b =%d\n ",a/b);
	    printf(" b divided a =%d\n ",b/a);
	    printf("\nDo You want to use calculaye again: ");
	    scanf("%c",&yn);

	    if((yn=='Y')||(yn=='y')){
		       goto top;
		       }
	    else{
		 exit(0);
		 }



	    getch();


       }
