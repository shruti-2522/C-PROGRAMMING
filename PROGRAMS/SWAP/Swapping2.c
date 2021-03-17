//example to swap two numbers without using third variable. BY * and /
#include<stdio.h>
int main()
{
    int a=10,b=990;
    printf("\n Before swapping a=%d and b=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\n After swapping a=%d and b=%d",a,b);
}

/*OUTPUT:
Before swapping a=10 and b=990
 After swapping a=990 and b=10     
 */