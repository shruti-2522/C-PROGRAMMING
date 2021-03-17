//CALUCLATE FACTORIAL USING LOOP:
#include<stdio.h>
int main()
{
    int n,fact=1;

    printf("Enter Any Number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
printf("FACTORIAL=%d",fact);
}

/*OUTPUT:
Enter Any Number:9 
FACTORIAL=362880
*/