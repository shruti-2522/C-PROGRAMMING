#include<stdio.h>
int main()
{
    FILE *fp;
    char c;

    fp=fopen("a.c","r");


    while (1)
    {
        c=fgetc(fp);
        if(c==EOF)
        break;
        printf("%c",c);
    }
    fclose(fp);
    
}

/*output:
#include<stdio.h>
int main()       
{
    FILE *fp;    
    char c;      

    fp=fopen("file_open.c","r");


    while (1)
    {
        c=fgetc(fp);
        if(c==EOF)
        break;
        printf("%c",c);
    }
    fclose(fp);

}
*/