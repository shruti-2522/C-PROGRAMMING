//REVERSE STRING:(strrev function):
#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    printf("Enter string:");
    gets(s);
    printf("String=%s",s);
    printf("\n Reverse String=%s",strrev(s));

}
/*OUTPUT:
String=shruti
 Reverse String=iturhs
 */