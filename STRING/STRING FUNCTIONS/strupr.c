//UPPERCASE:strupr()
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    printf("Enter Any String:");
    gets(s);
    printf("STRING=%s",s);
    printf("\n Upper case=%s",strupr(s));
}

/*OUTPUT:
STRING=shruti
 Upper case=SHRUTI
 */