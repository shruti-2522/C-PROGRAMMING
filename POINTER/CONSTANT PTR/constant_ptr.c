 //we write the code where we are changing the value of a pointer(POINTER TO CONSTANT)
#include<stdio.h>
int main()
{
    int a=900;
    int b=1990;

    const int *ptr;
    ptr=&a;
    ptr=&b;
    printf("value=%d",ptr);

}

/*OUTPUT:
value=6422292*/