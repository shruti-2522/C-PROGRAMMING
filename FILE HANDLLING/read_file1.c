//READ FILE CONTENT USING FSCANF FUNCTION AND DISPLAY IT:
#include<stdio.h>
#include<stdlib.h>
int main()
{
     char buff[200];
    FILE *fp;
   

    fp=fopen("read_content.c","r");
    while(fscanf(fp,"%s",buff)!=EOF)
    {
        printf("%s",buff);
    }
    fclose(fp);
}

/*OUTPUT:
MYNAMEISSHRUTIAMRUTKAR
*/