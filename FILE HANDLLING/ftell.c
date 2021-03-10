//The ftell() function returns the current file position of the specified stream
#include <stdio.h>  
#include <conio.h>  
int main (){  
   FILE *fp;  
   int length;  
   
   fp = fopen("aa.txt", "r");  
   fseek(fp, 0, SEEK_END);  
  
   length = ftell(fp);  
  
   fclose(fp);  
   printf("Size of file: %d bytes", length);  
   getch();  
}  

/*OUTPUT:
Size of file: 14 bytes
*/