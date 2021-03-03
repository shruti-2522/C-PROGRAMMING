//counting the number of vowels by using the null character.
#include<stdio.h>
int main()
{
    char s[40]="shruti amrutkar";
    int i=0,count=0;

   while(s[i]!= NULL)
   {
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
       {
           count++;
       }
       i++;
   } 
   printf("Number Of Vowels=%d",count);
}
/*OUTPUT:
Number Of Vowels=5
*/