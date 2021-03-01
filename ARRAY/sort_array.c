//SORTING AN ARRAY:
#include<stdio.h>
int main()
{
    int i,j,temp;
    int a[10]={12,342,67,54,2,45,78,90,87,34};

    for(i=0;i<=10;i++)
    {
        for(j=i+1;j<=10;j++)
        {
            if(a[j]>a[i])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
    printf("SORTED ELEMENT LIST:");
    for(i=0;i<10;i++)
    {
        printf("\n %d",a[i]);
    }
}
/*output:
SORTED ELEMENT LIST:
 342
 90
 87
 78
 67
 54
 45
 34
 12
 2*/