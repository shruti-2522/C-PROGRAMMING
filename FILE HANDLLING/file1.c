//WRITE HELLO STUDENT MESSAGE IN FILE:
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char s[]="HELLO STUDENTS";
    fp=fopen("a.txt","w");
     if(fp==NULL)
     {
      printf("You Can't open file");
      exit(1);
     }

     for(int i=0;i<strlen(s);i++)
     {
         fputc(s[i],fp);
     }
       
       getch();
       fclose(fp);



}