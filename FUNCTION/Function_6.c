
//program to calculate the average of five numbers.
#include<stdio.h>
void avg(int,int,int,int,int);
void main()
{
    int a,b,c,d,e;
    printf("Enter 5 Numbers");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    avg(a,b,c,d,e);
}

void avg(int a,int b,int c,int d,int e)
{
  float aa;
  aa=(a+b+c+d+e)/5;
  printf("AVERAGE=%f",aa);
}


/*OUTPUT:
Enter 5 Numbers10
20
30
40
50
AVERAGE=30.000000*/