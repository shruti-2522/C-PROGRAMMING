//Program to print table for the given number using do while loop
#include<stdio.h>
int main()
{
    int i=1,num;
    printf("Enter Any Number:");
    scanf("%d",&num);

    do{
        printf("%d\n",(num*i));
        i++;
    }while(i<=10);
}

/*OUTPUT:
5
10
15
20
25
30
35
40
45
50
*/