#include<stdio.h>

	  int func1(int array[])
	  {
	  int i;
	   clrscr();
	  for(i=0;i<=3;i++)
	  {
	  printf("the value at %d is %d\n",i,array[i]);
	  }
	 //  array[0]=456;
	  }
	  void func2(int*ptr)
	  {
	   int i;
	   clrscr();
	  for(i=0;i<=3;i++)
	  {
	  printf("the value at %d is %d\n",i,*(ptr+i));
	  }
	  *(ptr + 2)=6534;
	  getch();
	  }
	  void func3(int arr[2][2])
	  {
	  int i,j;
	  clrscr();
	  for(i = 0;i<=1;i++)
	  {
	  for(j=0;j<=1;j++)
	  {
	   printf("the value at %d, %d is %d\n",i,j, arr[i][j]);
	  }

	   }

	  }
	    void main()
	    {

	    int arr[][2] = {{12,23},{34,45}};
	   /* printf("the value at index 0 is %d\n", arr[0]);
	    func1(arr);
	    printf("the value at index 0 is %d\n", arr[0]);   */
	   /* func2(arr);
	    func2(arr); */
	    func3(arr);
	    getch();
	    }