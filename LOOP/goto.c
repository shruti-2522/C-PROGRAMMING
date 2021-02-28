#include <stdio.h>  
int main()   
{  
  int num,i=1;   
  printf("Enter the number whose table you want to print?");   
  scanf("%d",&num);  
  table:   
  printf("%d x %d = %d\n",num,i,num*i);  
  i++;  
  if(i<=10)  
  goto table;    
}  

/*OUTPUT:
Enter the number whose table you want to print?4
4 x 1 = 4
4 x 2 = 8
4 x 3 = 12
4 x 4 = 16
4 x 5 = 20
4 x 6 = 24
4 x 7 = 28
4 x 8 = 32
4 x 9 = 36
4 x 10 = 40
*/