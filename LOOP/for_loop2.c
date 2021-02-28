//Print table for the given number using C for loop
#include<stdio.h>
int main()
{
    int i,num;
    printf("Enter any number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d \n",(num*i));
    }
}

/*OUTPUT:
Enter any number:6
6 
12
18
24
30
36
42
48
54
60*/