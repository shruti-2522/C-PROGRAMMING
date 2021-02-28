//Function without argument and return value
#include<stdio.h>

void print();
void main()
{
    printf("Hello");
    print();
}

void print()
{
    printf("\n Hello world..");
}

/*OUTPUT:
Hello
 Hello world..
 */