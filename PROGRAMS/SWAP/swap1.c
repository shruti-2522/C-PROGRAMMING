//example to swap two numbers without using third variable. BY + and -
#include<stdio.h>
int main()
{
 int a=90,b=110;

 printf("\n Before swapping a=%d and b=%d",a,b);
 a=a+b;
 b=a-b;
 a=a-b;

 printf("\n Ater swapping a=%d and b=%d",a,b);
}

/*OUTPUT:
Before swapping a=90 and b=110
 Ater swapping a=110 and b=90
 */