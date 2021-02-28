#include<stdio.h>
void sum();
void main()
{
    printf("Calculate sum of two numbers:");
    sum();

}
void sum()
{
    int a,b,c;
    printf("\n Enter any two numbers:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("SUM=%d",c);
}

/*OUTPUT:
Enter any two numbers:3
4
SUM=7*/