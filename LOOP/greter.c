//FIND LARGESTE NUMBERS OF THREE
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Any Numebrs:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d id gretter",a);
    }

    if(b>c && c>a) 
    {
        printf("%d is gretter",b);
    }

    if(c>a && b>a)
    {
        printf("%d is gretter",c);
    }

    if(a==b && b==c)
    {
        printf("All Are Equal");
    }
}

/*OUTPUT:
Enter Any Numebrs:2
2
2
All Are Equal

Enter Any Numebrs:34
56
76
76 is gretter
*/