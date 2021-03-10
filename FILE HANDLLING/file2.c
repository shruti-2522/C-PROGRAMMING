#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char s[10];

    fp=fopen("bb.txt","w");
    if(fp==NULL)
    {
     printf("You can't open file");
     exit(1);
    }

    printf("ENTER STRING:");
    gets(s);

    for(int i=0;i<strlen(s);i++)
      fputc(s[i],fp);
    getch();
    fclose(fp);
    getch();


}