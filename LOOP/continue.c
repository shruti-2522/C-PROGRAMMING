#include<stdio.h>
int main()
{
    int i=1;
    for(i=1;i<=10;i++)
    {
    if(i==5)
        {
        continue;
        }
      
       printf("%d \n",i);
    }
}

/*OUTPUT:
1 
2 
3
4 
6
7
8
9
10*/