#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    char s[100];
    FILE *fp;

    fp=fopen("read_string.txt","r");
    if(fp==NULL)
    {
        printf("File Not Found");
        exit(1);
    }

    while(fgets(s,2,fp)!=NULL)
    {
          printf("%s",s);
    }
    fclose(fp);
}