//POINTER TO FUNCTION:
#include<stdio.h>
int addition();
int main()
{
    int result;
    int (*ptr)();
    ptr=&addition;
    result=(*ptr)();
    printf("sum=%d",result);
}
int addition()
{
    int a,b;
    printf("Enter Any Two Numbers:");
    scanf("%d %d",&a,&b);
    return a+b;
}

/*OUTPUT:
Enter Any Two Numbers:4
5
sum=9*/
