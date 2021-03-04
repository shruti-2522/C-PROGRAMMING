//ARRAY OF STRUCTURE:

#include<stdio.h>
struct student
{
    int rno;
    char name[70];
};

int main()
{
    int i;
    struct  student s[5];
    printf("\n***Enter student Details:***");
    for(i=0;i<5;i++)
    {
        printf("\n Enter student Roll no:");
        scanf("%d",&s[i].rno);

        printf("\n Enter student Name:");
        scanf("%s",&s[i].name);
    }

    printf("\n ***Enter Student List:***");
    for(i=0;i<5;i++)
    {
        printf("\n Stuent Roll Number=%d and name=%s",s[i].rno,s[i].name);
    }
   
    
}

/*OUTPUT:

***Enter student Details:***
 Enter student Roll no:1

 Enter student Name:Shruti

 Enter student Roll no:2 

 Enter student Name:Niki

 Enter student Roll no:3

 Enter student Name:Hitesh

 Enter student Roll no:4

 Enter student Name:Pradhunya

 Enter student Roll no:5

 Enter student Name:Rushali

 ***Enter Student List:***
 Stuent Roll Number=1 and name=Shruti
 Stuent Roll Number=2 and name=Niki
 Stuent Roll Number=3 and name=Hitesh
 Stuent Roll Number=4 and name=Pradhunya
 Stuent Roll Number=5 and name=Rushali
 */