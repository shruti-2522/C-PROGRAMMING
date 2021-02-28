//Function with argument and without return value
#include<stdio.h>
void sum(int,int);
void main()
{
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d %d",&a,&b);
    sum(a,b);
}

void sum(int a,int b)
{
 printf("sum=%d",a+b);
}

/*OUTPUT:
Enter any two numbers:5
5
sum=10
*/