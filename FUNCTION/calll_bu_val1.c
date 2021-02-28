///call by value

#include<stdio.h>
void change(int num)
{
 printf("\n Before adding the value inside function=%d",num);
 num=num+10;
 printf("\n After adding the value of inside funcction=%d",num);
}

int main()
{
    int x=100;
    printf("\n Value of x=%d",x);
    change(x);
    printf("\n After calling the function value of x=%d",x);
}

/*output:
 Value of x=100
 Before adding the value inside function=100
 After adding the value of inside funcction=110
 After calling the function value of x=100*/