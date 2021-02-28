#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0,j=0,k=0;i<4,i<6,i<8;i++)
    {
     printf("\n %d %d %d",i,j,k); 
     j+=2;
     k+=2;
    }
}

/*OUTPUT:

 0 0 0
 1 2 2
 2 4 4
 3 6 6
 4 8 8
 5 10 10
 6 12 12
 7 14 14*/