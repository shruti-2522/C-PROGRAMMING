//strcpy function:
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20]={'s','h','r','u','t','i'};
    char s1[20];
    strcpy(s1,s);
    printf("Copy the value of str1 into str 2=%s",s1);

}

/*OUTPUT:
Copy the value of str1 into str 2=shruti
*/