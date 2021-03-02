#include<stdio.h>
int main()
{
    int a=90;
    void *ptr;
    ptr=&a;

    printf("The value=%d",*(int *)ptr);
}

/*output:
The value=90*/