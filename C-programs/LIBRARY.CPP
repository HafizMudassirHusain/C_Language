#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int tbooks=5000;
 int tcbooks=5;
 float cat1books=((5000/100)*40);
 float cat2books=((5000/100)*15);
 float cat3books=((5000/100)*15);
 float cat4books=((5000/100)*15);
 float cat5books=((5000/100)*15);

 char  cat1[25]="computer science";
 char  cat2[25]="information technology";
 char  cat3[25]="artificial intelligence";
 char  cat4[25]="software engineering";
 char  cat5[25]="computing and processing";
 clrscr();

 float costcat1 = 540.45;
 float diff = ((costcat1/100)*20.67);
//  printf("the diff is = %f", diff);
 float costcat2 = costcat1+diff;
 float costcat3 = costcat2+diff;
 float costcat4 = costcat3+diff;
 float costcat5 = costcat4+diff;

 // finding cost
 printf("total books in library: %d\n",tbooks);
  printf("total catogories of books in library: %d\n",tcbooks);
  float totalcost=(costcat1*cat1books)+(costcat2*cat2books)+(costcat3*cat3books)+(costcat4*cat4books)+(costcat5*cat5books);
  printf("\ntotal cost = %.2f", totalcost);
  float totalcostcat1= (costcat1*cat1books);
  printf("\ntotal cost cat-1 = %.2f", totalcostcat1);
  float totalcostcat2= (costcat2*cat2books);
  printf("\ntotal cost cat-2 = %.2f", totalcostcat2);
  float totalcostcat3= (costcat3*cat3books);
  printf("\ntotal cost cat-3 = %.2f", totalcostcat3);
  float totalcostcat4= (costcat4*cat4books);
  printf("\ntotal cost cat-4 = %.2f", totalcostcat4);
  float totalcostcat5= (costcat5*cat5books);
  printf("\ntotal cost cat-5 = %.2f", totalcostcat5);

 // finding number books in each category
 printf("\nbooks in category-1 are = %.1f",cat1books);
 printf("\nbooks in category-2 are = %.1f",cat2books);
 printf("\nbooks in category-3 are = %.1f",cat3books);
 printf("\nbooks in category-4 are = %.1f",cat4books);
 printf("\nbooks in category-5 are = %.1f",cat5books);

  getch();
 }
