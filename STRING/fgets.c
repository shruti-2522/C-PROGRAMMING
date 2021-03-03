//FGETS() FUNCTION:
#include<stdio.h>
int main()
{
    char s[10];
    printf("Enter Any String:");
    fgets(s,10,stdin);//similar to scanf
    printf("string:%s",s);
}
/*OUTPUT:
Enter Any String:shruti
string:shruti*/
