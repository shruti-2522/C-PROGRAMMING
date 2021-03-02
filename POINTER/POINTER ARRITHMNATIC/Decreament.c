//DERCREAMENT POINTER
#include<stdio.h>
int main()
{
    int num=80;
    int *p;
    p=&num;

    printf("\n Before decreamenting value of p=%d",p);
    p=p-1;
    printf("\n After decreamenting value of p=%d",p);
}

/*OUTPUT:
Before decreamenting value of p=6422296
 After decreamenting value of p=6422292*/