#include<stdio.h>
#include<conio.h>
    void main()
      {
      char series[11];
      int i ,j,temp;
      clrscr();
      printf("enter the number: ");
      for (i=0;i<11;i++)
      {
      scanf("%d",&series[i]);
      }
      for(i=0;i<11;i++)
      {
      for(j=0;j<11;j++)
      {
      if(series[i]<series[j])
      {
      temp=series[i];
      series[i]=series[j];
      series[j]=temp;
      }
      }
      }
      printf("Accending No of array element: ");
      for (i=0;i<11;i++)
      {
      printf("%d",series[i]);
      printf("\n");
      }
      getch();
      }

