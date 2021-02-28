
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
        if(i==5)
        break;

    }
    printf("CAME OUTSIDE LOOP=%d",i);
}

/*OUTPUT:
1
2
3
4
5
CAME OUTSIDE LOOP=5*/