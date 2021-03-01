//pass array to function:
#include<stdio.h>


void printarray(int a[])
{
    for(int i=0;i<5;i++)
    {
        printf("a[%d]=%d \n",i,a[i]);
    }
}
int main()
{
    int a[5]={1,4,5,65,4};
    printarray(a);
    return 0;
}

/*output:
a[0]=1 
a[1]=4 
a[2]=5
a[3]=65
a[4]=4*/