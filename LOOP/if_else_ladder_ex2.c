//Program to calculate the grade of the student according to the specified marks.
#include<stdio.h>
int main()
{
    int marks;
    
    printf("Enter Your Marks:");
    scanf("%d",&marks);

    if(marks>85 && marks<=100)
    {
        printf("Congrats!..Your score grade is A");
    }
    else if(marks>75 && marks<=85)
    {
        printf("Congrats!..Your score grade is B");
    }
    else if(marks >60 && marks<=75)
    {
        printf("Congrats! Your score grade is C");
    }
    else if(marks >40 && marks<60)
    {
        printf("Congrats!-- Your score grade is B");
    }
    else
    {
        printf("Sorry!..You are Fail");
    }
}

/*OUTPUT:
Enter Your Marks:95
Congrats!..Your score grade is A
*/