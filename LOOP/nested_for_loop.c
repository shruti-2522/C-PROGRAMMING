#include<stdio.h>
int main()
{
    int i,j,n;
     printf("Enter The value of n:");
     scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d \t",(i*j));
        }
        printf("\n");
    }
}

/*OUTPUT:
Enter The value of n:3
1       2       3       4       5       6       7       8       9       10 
2       4       6       8       10      12      14      16      18      20 
3       6       9       12      15      18      21      24      27      30
*/