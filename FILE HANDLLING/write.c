//WRITE SET OPF CHARECTER INTO FILE:

#include<stdio.h>
int main()
{
    FILE *fp;

    fp=fopen("wirte_char.txt","w");
    fprintf(fp,"HELLO WORLD");
    fclose(fp);
}