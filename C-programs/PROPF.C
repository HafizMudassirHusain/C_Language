#include<stdio.h>

	   void display(int arr[],int n,int i)
	   {


	    //code transversal

	    for(i = 0;i < n;i++)
	    {
	    printf("%d\t",arr[i]);
	    }
	    printf("\n");

	    getch();

	   }


	     void indDeletion(int arr[],int size,int index,int i)
	     {

	    printf("enter the index number you want to delete: ");
	    scanf("%d",&index);
	     //code for indeletion
	     for(i = index;i < size-1; i++)
		 {
	     arr[i] = arr[i+1];
		 }

	     }


int main()
{

    int arr[100]={7,8,5,75,98,62,47,86,22,56,54,53,47,20};
    int size = 14,/* element =45,*/ index,i;
    display(arr,size,i);
    indDeletion(arr,size,index,i);
    size -=1;
    display(arr,size,i);

    return 0;
}