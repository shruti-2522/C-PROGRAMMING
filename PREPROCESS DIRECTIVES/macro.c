//MACROS:

#include<stdio.h>
int main()
{
    printf("\nFILE NAME=%s",__FILE__);
    printf("\n Current Date=%s",__DATE__);
    printf("\n Current Time=%s",__TIME__);
    printf("\n Current Line Number=%d",__DATE__);
    printf("\n STDC=%d",__STDC__);
}

/*OUTPUT:

FILE NAME=macro.c
 Current Date=Mar 11 2021
 Current Time=10:51:50
 Current Line Number=4214906
 STDC=1
 */