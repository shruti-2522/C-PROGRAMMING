//Example of do while statement:
#include<stdio.h>
void main()
{
    char c;
    int choice,dummy;
    do{
        printf("\n 1.Javatpoint \n2.PHP \n3.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("\n Hello");
            break;

        case 2:
           printf("\n JAVATPOINT");
           break;

        case 3:
            exit(0);
            break;      
        
        default:
            printf("Please enter valid choice");
        }


        printf("\nDo you want to enter more");
        scanf("%d",&dummy);
        scanf("%c",&c);
    }
    while(c=='y');
}

/*OUTPUT:
1.Javatpoint
2.PHP
3.Exit
2

 JAVATPOINT
Do you want to enter more y

 1.Javatpoint
2.PHP
3.Exit
2

 JAVATPOINT*/