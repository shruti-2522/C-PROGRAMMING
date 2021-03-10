#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("b.c","w");
    
    fprintf(fp,"content write into file using fp");
    fclose(fp);
}