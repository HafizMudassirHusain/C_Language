#include<stdio.h>
#include<conio.h>

  struct employee{
      int id;
      char name[20];
//      char fname[20];
      char position[20];
      int grade;
      int salary;
      char company[20];
  };
void main()
{
  int i;
  clrscr();
  FILE *ptr;
  ptr = fopen("empInfo", "w");
     struct employee s[25];
     for(i=0; i<=24; i++)
     {
      printf(" insert employee id");
      scanf("%d",&s[i].id);
     // fprintf("%d", &s[i].id);

      printf(" insert employee name");
      scanf("%s",&s[i].name);
     // fprintf("%s", &s[i].name);

  //    printf("\n insert employee father name");
    //  scanf("%s",&s[i].fname);
     // fprintf("%s", &s[i].department);

      printf(" insert position");
      scanf("%s",&s[i].position);
     // fprintf("%d", &s[i].mark);

      printf(" insert grade");
      scanf("%d",&s[i].grade);
     // fprintf("%c", &s[i].sec);

      printf(" insert salary");
      scanf("%d",&s[i].salary);
     // fprintf("%s", &s[i].clas);


      printf(" insert company");
      scanf("%s",&s[i].company);
     }

     for(i=0; i<=24; i++)
     {
      fprintf(ptr,"\n id : %d", s[i].id);


      fprintf(ptr,"\n name : %s",s[i].name);


//      fprintf(ptr,"\n father name = %s",s[i].fname);

      fprintf(ptr,"\n poaition : %s", s[i].position);

      fprintf(ptr,"\n grade : %d", s[i].grade);


      fprintf(ptr,"\n salary : %d",s[i].salary);

      fprintf(ptr,"\n company : %s",s[i].company);
      fprintf(ptr,"\n");

     }
     fclose(ptr);
getch();
}
