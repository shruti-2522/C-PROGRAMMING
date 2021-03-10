//fseek() function
#include <stdio.h>  
void main(){  
   FILE *fp;  
  
   fp = fopen("myfile.txt","w+");  
   fputs("This is fseek() function", fp);  
    
   fseek( fp, 7, SEEK_SET );  
   fputs("shruti amrutkar", fp);  
   fclose(fp);  
}  

