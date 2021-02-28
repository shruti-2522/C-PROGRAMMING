#STATIC VARIABLE USED
#include<stdio.h>
int main()
{
    printf("%d",func());
    printf("\n%d",func());

}
int func()
{
    static int count=0;
    count++;
    return count;
}

/*OUTPUT:
1
2*/