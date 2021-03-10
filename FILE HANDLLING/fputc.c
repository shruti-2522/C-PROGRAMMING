//WRITE A CHARECTER INTO A SINGLE FILE:

#include<stdio.h>
int main()
{
    FILE *fp;
    char s;
    fp=fopen("write_char.txt","w");

    fputc('s',fp);
    fclose(fp);
}