//DEREFRENCE POINTER
#include<stdio.h>
int main()
{
    int a=90;
    int *ptr;
    ptr=&a;
    *ptr=8;
    printf("Value of a=%d",*ptr);
}

/*output:
Value of a=8*/