//SUM OF DIGITS
#include<stdio.h>
int main()
{
    int n,sum=0,rem;

    printf("Enter Any Number:");
    scanf("%d",&n);

    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("SUM=%d",sum);
    
}
/*OUTPUT:
Enter Any Number:890
SUM=17
*/