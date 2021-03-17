//CHECK NUMEBR IS ARMSTRONG NUMBER:

#include<stdio.h>
int main()
{
    int n,temp,sum=0,rem;

   printf("Entter Any Number:");
   scanf("%d",&n);
   temp=n;

   while (n>0)
   {
       rem=n%10;
       sum=sum+(rem*rem*rem);
       n=n/10;
   }

   if(temp==sum)
   printf("%d is Aramstrong Number",temp);
   else
   printf("%d is not Armstrong NNumber",temp); 
   
}

/*OUTPUT:
Entter Any Number:153
153 is Aramstrong Number
*/