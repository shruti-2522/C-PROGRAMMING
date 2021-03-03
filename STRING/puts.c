//read a string using gets() and print it on the console using puts().
#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("Enter Your string");
    gets(name);
    printf("Your name is:");
    puts(name);
}

/*OUTPUT:
Enter Your string shruti
Your name is: shruti*/