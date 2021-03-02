//DOUBBLE POINTER
#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    int **pp;
    p=&a;
    pp=&p;

   
    printf("Address of p=%d \n",p);
    printf("Address of pp=%d \n",pp);
     printf("Value of p=%d \n",*p);
    printf("Value of ptr is=%d \n",**pp);

}
/*OURPUT:
Address of p=6422296 
Address of pp=6422292 
Value of p=10
Value of ptr is=10*/