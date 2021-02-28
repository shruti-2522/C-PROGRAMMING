//TERNARY OPERATOR:
#include<stdio.h>
int main()
{
    int age;
    printf("ENTER AGE:");
    scanf("%d",&age);

    (age>=18)?(printf("Eligble for Vote")):(printf("NoN Eligible for vote"));
}

/*OUTPUT:
ENTER AGE:22
Eligble for Vote*/