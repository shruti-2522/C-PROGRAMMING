//rewind() function sets the file pointer at the beginning of the stream.
#include<stdio.h>  
#include<conio.h>  
void main(){  
FILE *fp;  
char c;  
 
fp=fopen("aa.txt","r");  
  
while((c=fgetc(fp))!=EOF){  
printf("%c",c);  
}  
  
rewind(fp);//moves the file pointer at beginning of the file  
  
while((c=fgetc(fp))!=EOF){  
printf("%c",c);  
}  
  
fclose(fp);    
getch();    
}    

/*OUTPUT:
HELLO STUDENTSHELLO STUDENTS
*/