#include <stdio.h>  
int main()  
{  
   int a=90;  
   int *ptr1,*ptr2;  
   ptr1=&a;  
   ptr2=&a;  
   *ptr1=7;  
   *ptr2=6;  
    printf("The value of a is : %d",a);  
    return 0;  
}  

/*OUTPUT:
The value of a is : 6*/