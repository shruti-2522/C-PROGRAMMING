//Recursion is used to calculate the factorial of a number.
#include<stdio.h>
int fact(int n);
int main()
{
    int n,f;
    printf("Enter Any Number:");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial=%d",f);

}

int fact(int n)
{
 if(n==0)
 {
     return 0;
 }
 else if (n==1)
 {
     return 1;
 }
 else {
     return n*fact(n-1);
 }
 
}
/*OUTPUT:
Enter Any Number:5
Factorial=120*/