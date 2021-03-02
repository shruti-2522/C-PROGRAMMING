#include<stdio.h>
int main()
{
    int num=10;
    int *p;
    p=&num;

   printf("\n Value of pointr brfore increament=%d",p);
   p=p+1;
   printf("\n Value of pointer after increament=%u",p);


}
/*OUTPUT:

 Value of pointr brfore increament=6422296
 Value of pointer after increament=6422300*/