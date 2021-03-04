//NESTED STRUCTURE
#include<string.h>
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    struct nested_struct1
    {
      int dd;
      int mm;
      int yy;
    }doj;
    

}e1;

int main()
{
    e1.id=101;
    strcpy(e1.name,"shruti amrutkar");
    e1.doj.dd=22;
    e1.doj.mm=2;
    e1.doj.yy=1999;

    printf("\n ***EMPLOYEE INFORMATION:***");
    printf("\n Employee Id:%d",e1.id);
    printf("\n Employe Name:%s",e1.name);
    printf("\n Employee date of joining:%d %d %d\n",e1.doj.dd,e1.doj.mm,e1.doj.yy);
}

/*OUTPUT:

 ***EMPLOYEE INFORMATION:***
 Employee Id:101
 Employe Name:shruti amrutkar
 Employee date of joining:22 2 1999
 */