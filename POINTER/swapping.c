//SWAPPING OF TWO NUMBERS USING THIRD VCARIABLE WITH PTR:

#include<stdio.h>
int main()
{
    int a=20,b=110,*p1=&a,*p2=&b;

    printf("\n Before swapping *p1=%d and *p2=%d",*p1,*p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;

    printf("\n After swapping *p1=%d and *p2=%d",*p1,*p2);
}

/*OUTPUT:
 Before swapping *p1=20 and *p2=110
 After swapping *p1=110 and *p2=20*/