//program to calculate the square
#include<stdio.h>
int sq();
void main()
{
  int square;
   square=sq();
   printf("square=%d",square);
}

int sq()
{
    int a;
    printf("Enter Any Number:");
    scanf("%d",&a);
    return a*a;

}

/*OUTPUT:
Enter Any Number:4
square=16*/