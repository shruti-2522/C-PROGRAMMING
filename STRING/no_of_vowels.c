//counting the number of vowels in a string.
#include<stdio.h>
int main()
{
    char s[40]="Shruti amrutkar";

    int i=0,count=0;
    while(i<11)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            count++;
        }
        i++;
    }
    printf("The Number of vowels=%d",count);
}
/*OUTPUT:
The Number of vowels=4*/