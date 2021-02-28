//Nested switch case statement
#include<stdio.h>
int main()
{
    int i=10,j=20;

    switch (i)
    {
    case 10:
         printf("\n Number is  equal to %d",i);
    
    case 20:
       switch (j)
       {
       case 20:
           printf("\n Number is equal to %d",j);
           break;
       
       }
       }
    
    printf("\n Exact Value of i:%d",i);
    printf("\n Exact Value of j:%d",j);  
}

/*OUTPUT:

 Number is  equal to 10
 Number is equal to 20
 Exact Value of i:10
 Exact Value of j:20*/