//EXAMPLE OF SSWITCH CASE:
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Any Number:");
    scanf("%d",&num);

    switch (num)
    {
    case 10:
        printf("Number is equals 10");
        break;

    case 20:
       printf("Number is equals 20");   
       break;

    case 30:
       printf("Number is equals 30");
       break;     

    default:
        printf("10,20,30 ARE NOT EQUALS");
        break;
    }
}

/*OUTPUT:
Enter Any Number:45
10,20,30 ARE NOT EQUALS
*/