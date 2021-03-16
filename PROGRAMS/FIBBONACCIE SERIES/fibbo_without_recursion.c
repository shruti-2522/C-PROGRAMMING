//FIBBONACCIE SERIES WITHOUT RECURSION:

#include<stdio.h>
int main()
{
    int a=0,b=1,n,i,c;

    printf("\nEnter Number of terms:");
    scanf("%d",&n);
   

    printf("\n *****FIBBONACCI SERIES*******\n ");
     printf("%d %d",a,b);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;

   }

   /*OUTPUT:
   
 *****FIBBONACCI SERIES*******
 0 1 1 2 3 5 8 13 21 34
 */
  
}