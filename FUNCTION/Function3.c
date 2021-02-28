// Function without argument and with return value
#include<stdio.h>
int sum();
void main()
{
    int result;
    printf("Calculate sum of two numbers:");
    result=sum();
    printf("sum=%d",result);

}

int sum()
{
    int a,b;
    printf("\n Enter any two numbers:");
    scanf("%d %d",&a,&b);
    return a+b;
}

/*OUTPUT:
Enter any two numbers:23
45
sum=68*/