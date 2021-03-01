//Passing array to a function as a pointer
#include<stdio.h>
void printArray(char *arr)
{
 for(int i=0;i<5;i++)
 {
     printf("\t %c",arr[i]);
 }
}

int main()
{
    char arr[5]={'A','B','C','D','E'};
    printArray(arr);
    return 0;
}

/*output:
 A       B       C       D       E*/