//LOWER STRING:strlwr()
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    printf("Enter Any String:");
    gets(s);
    printf("String=%s",s);
    printf("\n Lower string=%s",strlwr(s));
}

/*OUTPUT:
String=SHRUTI
 Lower string=shruti
 */