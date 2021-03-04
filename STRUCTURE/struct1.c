#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    char name[50];
    float salary;
}e1,e2;
int main()
{
 e1.id=1;
 strcpy(e1.name,"shruti amrutkar");
 e1.salary=70000;

 e2.id=2;
 strcpy(e2.name,"nikita morankar");
 e2.salary=80000;

 printf("\n *** EMPLOYEE FIRST INFORMATION***");
 printf("\n EMPLOYEE 1 :%d",e1.id);
 printf("\n EMPLOYEE 1: %s ",e1.name);
 printf("\n Employee 1: %f",e1.salary);


 printf("\n ***EMPLOYEE SECOND INFORMATION***");
 printf("\n EMPLOYE 2 :%d",e2.id);
 printf("\n EMPLOYE 2 :%s ",e2.name);
 printf("\n EMPLOYE 2 :%f ",e2.salary);


}
/*OUTPUT:

 
 *** EMPLOYEE FIRST INFORMATION***
 EMPLOYEE 1 :1
 EMPLOYEE 1: shruti amrutkar
 Employee 1: 70000.000000
 ***EMPLOYEE SECOND INFORMATION***
 EMPLOYE 2 :2
 EMPLOYE 2 :nikita morankar
 EMPLOYE 2 :80000.000000
 */