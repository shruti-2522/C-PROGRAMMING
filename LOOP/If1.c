//CHECK GIVEN NUMBER IS EVEN OR NOT
#include<stdio.h>
int main()
{
    int a;
    printf("Enter Any Number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d EVEN NUMBER",a);
    }
}

/*OUTPUT:
Enter Any Number:2
2 EVEN NUMBER*/