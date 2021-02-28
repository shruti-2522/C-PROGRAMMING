#include<stdio.h>
int main()
{
    int i=1,num=0;
    printf("Enter Any Number:");
    scanf("%d\n",&num);
    while(i<=10)
    {
        printf("%d \n",(num*i));
        i++;
    }
  
}

/*OUTPUT:
7
14
21
28
35
42
49
56
63
70
*/