
#include <stdio.h>  
int main()  
{  
    int x=4;  
    int y;  
    int *ptr;  
    ptr=&x;   
    y=*ptr;  
    *ptr=5;  
    printf("The value of x is : %d",x);  
    printf("\n The value of y is : %d",y);  
    return 0;  
}  

/*output:
The value of x is : 5
 The value of y is : 4*/