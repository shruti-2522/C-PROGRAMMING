//REASSIGNING A STRING USING PTR:
#include<stdio.h>
int main()
{
    char *s="Shruti";
    printf("\n After assigning a string=%s",s);
    s="Amrutkar";
    printf("\n Before assigning a string=%s",s);
}

/*OUTPUT:

 After assigning a string=Shruti
 Before assigning a string=Amrutkar
 */