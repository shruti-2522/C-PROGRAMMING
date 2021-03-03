//CONCAT STRING:strcat():
#include<stdio.h>
int main()
{
    char a[10]={'s','h','r','u','t','i'};
    char a1[10]={'a','m','r','u','t','k','a','r'};
    strcat(a,a1);
    printf("concat string=%s",a);
}

/*OUTPUT:
concat string=shrutiamrutkar
*/