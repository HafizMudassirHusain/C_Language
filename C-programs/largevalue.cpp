#include<stdio.h> 
#include<conio.h>  
 void main()  
    {       
int a[10], greater;       
int i;       
clrscr();    
      for (i= 0;i<10;i++)  
       {  
      printf("Enter number %d : ", i+1); scanf("%d", &a[i]);  
       }  
      greater = a[0];       
    for(i = 0; i < 10; i++)  
       {  
     if(a[i] > greater)   
       {     
            greater = a[i];  
        }  
       }  
    printf("Greatest of ten numbers is %d", greater);   
  getch();  
  }  
