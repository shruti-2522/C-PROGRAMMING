//POINTER CONCEPT:

#include<stdio.h>
int main()
{
    int num=80;
    int *p;
    p=&num;
    printf("\n Addres of the number is=%d",p);
    printf("\n Value of the p variable is =%d",*p);

}

/*output:

 Addres of the number is=6422296
 Value of the p variable is =80 */