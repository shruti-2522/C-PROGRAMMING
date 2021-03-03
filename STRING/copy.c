//use of pointers to copy the content of a string into another
#include<stdio.h>
int main()
{
    char *p="shruti amrutkar";
    printf("\n string p:%s",p);
    char *q;
    printf("\n Copy content of the first pointer toe second pointer:");
    q=p;
    printf("\n String q:%s",q);

}

/*OUTPUT:

 string p:shruti amrutkar
 Copy content of the first pointer toe second pointer:
 String q:shruti amrutkar*/