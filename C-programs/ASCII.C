#include<stdio.h>
#include<conio.h>
  void main()
  {
  int i ,j,sum=0;
  char name[5][11]={"ARMAN","NAJEEBULLAH","ASLAM","KASHIF ALI","ZOHAIR KHAN"};
  clrscr();
  for(i=0;i<=4;i++){
  for(j=0;j<=10;j++){
  printf("%c",name[i][j]);
  sum=sum+name[i][j];
  }
  printf("\t:[%d] this is total number for ASCII code of name",sum);
  sum=0;
  printf("\n");
  }
  getch();
  }