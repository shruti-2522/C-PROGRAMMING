
//Prime Number program in C
#include<stdio.h>
int main()
{
    int n,m,flag=0;

//Enter a number to checvk it is prime or not
    printf("Enter A Number:");
    scanf("%d",&n);

    m=n/2;

  for(int i=2;i<=m;i++)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }

if(flag==0)
 printf("%d is a prime number",n);
 else
 printf("%d is not prime number",n);
}

/*OUTPUT:
Enter A Number:89
89 is a prime number
*******************
Enter A Number:400
400 is not prime number
*/