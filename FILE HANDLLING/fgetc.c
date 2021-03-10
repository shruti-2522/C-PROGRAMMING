//READ A SIGNLE CHARECTER INTO FILE AND DISPLAY IT:
#include<stdio.h>  
#include<conio.h>  
void main(){  
FILE *fp;  
char c;  

fp=fopen("a.txt","r");  
  
while((c=fgetc(fp))!=EOF){  
printf("%c",c);  
}  
fclose(fp);  
getch();  
}  

/*output:
HELLO STUDENTS
*/