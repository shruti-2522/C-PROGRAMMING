//structure for employee:
#include<stdio.h>
#include<string.h>
struct emp{
     int id;
    char name[10];
   
}e1;

int main()
{
    e1.id=1;
    strcpy(e1.name,"shruti amrutkar");
    printf("\n Employee Id=%d",e1.id);
    printf("\n Employee name= %s",e1.name);
}

/*OUTPUT:
Employee Id=1
 Employee name= shruti amrutkar*/