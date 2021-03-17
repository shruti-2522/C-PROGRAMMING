//FACTORAIL NUMBER USING RECURSION:
#include<stdio.h>
long factorial(int n)
{
    if(n==1)
     return 1;
     else
     return n*factorial(n-1);


}

int main()
{
    int n,fact;
    printf("Enter Any Number:");
    scanf("%d",&n);

    fact=factorial(n);
    printf("Factorial=%d",fact);
}

/*OUTPUT:
Enter Any Number:6
Factorial=720
*/