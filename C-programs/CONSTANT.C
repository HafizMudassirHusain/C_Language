#include<stdio.h>
#include<conio.h>
      void main()
      {
      /*----------------CONSTANT ------------------------
     ------------------- PROGRAM 01 ---------------------*/
      float a = 40000;
   //   what would be 50% of 10% of a
    float b = (a*10/100);
    clrscr();
    float c = (b*50/100);
    printf("a is: %.2f\n",a);
    printf("10 percentage of a =%.2f\n",b);
    printf("they would be 50percentage of 10 percentage of a =%.2f\n",c);
    //----------------------------------END----------------------

   //-------------- Progranm 02---------------
    int c,a =10,b=20;
    clrscr();
    printf("a = %d\t",a);
    printf("b = %d",b);
    c=a;
    a=b;
    b=c;
    printf("\na = %d",a);
    printf("\nb = %d\n",b);
     //	    -----------------END--------------------- */

  // -----------------Program-03----------------------
    int num[20]={1,2,3,4,5,7,6,8,4,6,2,5,2,7,4,6,9,2,1,8};
   int i,find,count=0;
   clrscr();
   printf("enter the number to find: ");
   scanf("%d",&find);
   for(i=0;i<=19;i++)
   {
   if(find==num[i])
   {
   count++;
   }
   }
   printf("your is present in array :%d/n No of time",count);
 //  -----------------END--------------- */

   // --------------------Program 04-------------------------
  //  if 1Kg magos prise is 500,what will be tha rate of 100 Kg

    int mango = 500;
    int weight=50;
    clrscr();
    printf("1 kg mango prize is: %d\n",mango);
    printf("100 Kg mongo prize is: %d\n",weight*mango);
 // -------------------------------*/

    getch();
    }