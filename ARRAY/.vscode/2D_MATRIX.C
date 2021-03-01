//Storing elements in a matrix and printing it.
#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];//INITIALIZATION OF ARRAY

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n Enter Elements:a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }//END FOR(J) LOOP
    }//END FOR(I) LOOP

    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
       }//END FOR(J)LOOP
    }///END FOR (I) LOOP
}

/*OUTPUT:
 Enter Elements:a[0][0]=1

 Enter Elements:a[0][1]=2

 Enter Elements:a[0][2]=3

 Enter Elements:a[1][0]=4

 Enter Elements:a[1][1]=5

 Enter Elements:a[1][2]=6

 Enter Elements:a[2][0]=7

 Enter Elements:a[2][1]=8

 Enter Elements:a[2][2]=9

1       2       3
4       5       6
7       8       9*/