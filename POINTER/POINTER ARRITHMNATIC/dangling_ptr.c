#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int *ptr=(int *)malloc(sizeof(int));
    int a=700;
    ptr=&a;
    free(ptr);
    return 0;
}