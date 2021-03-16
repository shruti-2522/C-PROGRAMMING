//FIBBONACCIE SERIES WITH RECURSION:

#include<stdio.h>
void printfibbo(int n)
{
    static int a=1,b=1,c;
    if(n>0)
    {
    c=a+b;
    a=b;
    b=c;
    printf("\t %d",c);
    printfibbo(n-1);
    }
}

int main()
{
    int n;
    printf("Enter Number Of Terms:");
    scanf("%d",&n);

    printf("*******Fibbonaccie Sereies******");
    printf("\n\t%d %d",0,1);
    printfibbo(n-2);
    return 0;
}
/*OUTPUT:
******Fibbonaccie Sereies******
        0 1      2       3       5       8       13      21
        */