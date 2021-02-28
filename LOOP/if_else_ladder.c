//EXAMPLE OF IF-ELSE-IF STATEMENT:
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Any Number:");
    scanf("%d",&num);

    if(num==10)
    {
        printf("Number equals to 10",num);
    }
    else if(num==50)
    {
        printf("Number equals to 50",num);
    }
    else if(num==30)
    {
        printf("Number equals to 30",num);
    }
    else{
        printf("15,10,30 are not equal");
    }
}

/*OUTPUT:
Enter Any Number:70
15,10,30 are not equal*/