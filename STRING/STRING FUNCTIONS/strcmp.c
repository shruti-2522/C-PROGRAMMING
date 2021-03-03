//COMPARE TWO STRINGS:(strcmp function)
#include<string.h>
#include<stdio.h>
int main()
{
    char a[10],b[10];
    printf("Enter First String:");
    gets(a);
    printf("Enter Secondd string:");
    gets(b);

    if(strcmp(a,b)==0)
    {
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
}
/*Output:

Enter First String:shruti
Enter Secondd string:shruti
Strings are equal*/