#include <stdio.h>
int array_sum(int ar[]){
int k,sum=0;
for(k=0;k<5;k++){
   sum = sum+ ar[k];
}
//sum=ar[2];
return sum;
}
int main(void){
int j[5]={1,2,3,4,5};
int sum;
sum=array_sum(j);
printf("Sum = %d \n",sum);
return 0;
}
