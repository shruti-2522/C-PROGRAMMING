//PRINT TWO DIMENSIONAL ARRAY:
#include<stdio.h>
int main()
{
    int i,j;
    int a[4][3]={{1,2,3},{4,5,6},{45,65,67},{34,55,67}};
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]=%d \n",i,j,a[i][j]);
        }
    }
}

/*OUTPUT:
a[0][0]=1 
a[0][1]=2 
a[0][2]=3 
a[1][0]=4
a[1][1]=5
a[1][2]=6
a[2][0]=45 
a[2][1]=65
a[2][2]=67
a[3][0]=34
a[3][1]=55
a[3][2]=67*/