#include <stdio.h>
int array_sum(int *pot){
int k,sum=0;
for(k=0;k<5;k++){
   sum = sum+ *pot;
   pot++;
}
//sum=ar[2];
return sum;
}
int main(void){
int j[5]={1,2,3,4,5};
int sum;
int *pot;
pot=&j[0];
sum=array_sum(pot);
printf("Sum = %d \n",sum);
return 0;
}
