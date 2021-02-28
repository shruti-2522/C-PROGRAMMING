
#include <stdio.h>  
int main()   
{  
  int i, j, k;    
  for(i=0;i<10;i++)  
  {  
    for(j=0;j<5;j++)  
    {  
      for(k=0;k<3;k++)  
      {  
        printf("%d %d %d\n",i,j,k);  
        if(j == 3)  
        {  
          goto out;   
        }  
      }  
    }  
  }  
  out:   
  printf("came out of the loop");   
} 

/*Output:
PS F:\C programs\BASIC\LOOP> cd "f:\C programs\BASIC\LOOP\" ; if ($?) { gcc goto1.c -o goto1 } ; if ($?) { .\goto1 }
0 0 0
0 0 1
0 0 2
0 1 0
0 1 1
0 1 2
0 2 0
0 2 1
0 2 2
0 3 0
came out of the loop
*/