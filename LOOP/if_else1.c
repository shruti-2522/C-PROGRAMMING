//TO CHECK GIEVEN NUMEBR IS EVEN OR ODD USING IF ELSE LOOP
#include<stdio.h>
int main()
{
    int a;
    printf("Enter Any Number:");
    scanf("%d",&a);

    if(a%2==0)
    printf("%d Even No",a);
    else
    printf("%d Odd No",a);
}

/*OUTPUT:
Enter Any Number:3
3 Odd No
*/