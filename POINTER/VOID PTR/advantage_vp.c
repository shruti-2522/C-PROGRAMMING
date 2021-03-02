//the malloc() and calloc() function return the void pointer, so these functions can be used to allocate the memory of any data type.
 
#include<stdio.h>
#include<malloc.h>
int main()
{
    int a=90;
    int *x=(int *)malloc(sizeof(int));
    x=&a;
    printf("value of the ptr is=%d",*x);
}

/*output:

value of the ptr is=90*/