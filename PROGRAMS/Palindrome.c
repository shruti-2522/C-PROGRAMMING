//PALINDROME NUMBER:

#include<stdio.h>
int main()
{
    int n,temp,rem,rev=0;

    printf("Enter Any Number:");
    scanf("%d",&n);

    temp=n;

    while (n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
        
    }

    if(temp==rev)
     printf("%d is palindrome number",rev);
     else
     printf("%d is not palindorme number",rev);
    

}

/*OUTPUT:
Enter Any Number:789
987 is not palindorme number
********************
Enter Any Number:212
212 is palindrome number
*/