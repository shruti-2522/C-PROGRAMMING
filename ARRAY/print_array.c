///print the elements of array:
#include<stdio.h>
int main()
{
    int marks[5],i;
    marks[0]=50;
    marks[1]=70;
    marks[2]=90;
    marks[3]=110;
    marks[4]=34;

    for(i=0;i<5;i++)
    {
        printf("\n %d",marks[i]);
    }
}

/*OUTPUT:
 50
 70
 90
 110
 34*/