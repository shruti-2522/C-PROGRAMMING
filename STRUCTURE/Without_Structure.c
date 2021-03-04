//PRINTING STUDENT DETAILS:WITHOUT STRUCTURE

#include<stdio.h>  
void main ()  
{  
  char names[2][10],dummy; // 2-dimensioanal character array names is used to store the names of the students   
  int roll_numbers[2],i;  
  float marks[2];  
  for (i=0;i<3;i++)  
  {  
      
    printf("Enter the name, roll number, and marks of the student %d",i+1);  
    scanf("%s %d %f",&names[i],&roll_numbers[i],&marks[i]);  
    scanf("%c",&dummy); // enter will be stored into dummy character at each iteration  
  }  
  printf("Printing the Student details ...\n");  
  for (i=0;i<3;i++)  
  {  
    printf("%s %d %f\n",names[i],roll_numbers[i],marks[i]);  
  }  
}  

/*OUTPUT:
Enter the name, roll number, and marks of the student 1
shruti
3
89
Enter the name, roll number, and marks of the student 2
niki
67
89
Enter the name, roll number, and marks of the student 3
rushali
67
89
Printing the Student details ...
shruti 1118961664 89.000000
niki 67 89.000000
☻ 167772227 89.000000*/