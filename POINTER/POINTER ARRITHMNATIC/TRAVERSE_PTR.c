//Traversing an array by using pointer
#include<stdio.h>
int main()
{
    int a[5]={10,20,45,67,87};
    int *p=a;
    int i;

    for(i=0;i<5;i++)
    {
        printf("\n %d",*(p+i));
    }
}

/*OUTPUT:
 10
 20
 45
 67
 87*/