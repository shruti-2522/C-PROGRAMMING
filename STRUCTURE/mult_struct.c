// where we need to store the data of 5 students. We can store it by using the structure as given below.
#include<stdio.h>
struct  student{
    char name[20];
    int id;
    float marks;
};

int main()
{
    struct student s1,s2,s3;
    int dummy;

    printf("\n Enter name,id,marks of student 1:");
    scanf("%s %d %f",&s1.name,&s1.id,&s1.marks);
    scanf("%d",&dummy);

    printf("\n Enter name,id,marks of student 2:");
    scanf("%s %d %f",&s2.name,&s2.id,&s2.marks);
     scanf("%d",&dummy);

    printf("\n Enter name,id,marks of student 3:");
    scanf("%s %d %f",&s3.name,&s3.id,&s3.marks);
    scanf("%d",&dummy);

    printf("***PRINT DETAILS OF STUDENT***");
    printf("\n STUDENT name=%s ,id=%d and marks=%f:",s1.name,s1.id,s1.marks);
    printf("\n STUDENT name=%s ,id=%d and marks=%f:",s2.name,s2.id,s2.marks);
    printf("\n STUDENT name=%s ,id=%d and marks=%f:",s3.name,s3.id,s3.marks);


}
/*OUTPUT:

Enter the details of student s1: 
Enter the name of the student:shruti

Enter the age of student:22

 Name of the student is : shruti
 Age of the student is : 22
PS F:\C programs\BASIC\STRUCTURE> cd "f:\C programs\BASIC\STRUCTURE\" ; if ($?) { gcc mult_struct.c -o mult_struct } ; if ($?) { .\mult_struct }

 Enter name,id,marks of student 1:shruti
1
78

45

 Enter name,id,marks of student 2:niki
3
89
 
8

 Enter name,id,marks of student 3:Hitesh
4
89
l
***PRINT DETAILS OF STUDENT***
 STUDENT name=shruti ,id=1 and marks=78.000000:
 STUDENT name=niki ,id=3 and marks=89.000000:
 STUDENT name=Hitesh ,id=4 and marks=89.000000:
 */