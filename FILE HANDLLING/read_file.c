//READ THE CONTEMNT OF FILE AND DISPLAY IT:

#include<stdio.h>
int main()
{
    FILE *fp;

    fp=fopen("read_content.c","r");
    if(fp==NULL)
    {
        printf("FILE NOT FOUND");
        exit(1);
    }

    char ch=getc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);

}
/*OUTPUT:
MY NAME IS SHRUTI AMRUTKAR
*/