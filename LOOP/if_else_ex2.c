//rogram to check whether a person is eligible to vote or not.
#include<stdio.h>
int main()
{
    int age;

    printf("Enter Age");
    scanf("%d",&age);

    if(age>=18)
    printf("Eligible for Vote");
    else
    printf("Non Eligible for Vote");
}

/*OUTPUT:
Enter Age 18
Eligible for Vote*/