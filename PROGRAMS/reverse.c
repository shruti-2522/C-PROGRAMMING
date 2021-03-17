//REVERSE NUMBER:

#include<stdio.h>
int main()
{
    int n,rev=0,rem;

    printf("Enter Any Number:");
    scanf("%d",&n);

    while (n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;

    }
    printf("Reverse=%d",rev);
    
}
/*OUTPUT:
Enter Any Number:12344
Reverse=44321
*/