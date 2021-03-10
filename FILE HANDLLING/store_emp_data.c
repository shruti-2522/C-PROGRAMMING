#include<stdio.h>
int main()
{
    FILE *fp;
    int id;
    char name[30];
    float salary;

    fp=fopen("emp.txt","w+");//OPEN FOR WRITEINHG


    if(fp==NULL)
    {
        printf("file can not open");
        exit(1);    
        }

        printf("\nENTER EMPLOYEE ID:");
        scanf("%d",&id);
        fprintf(fp,"ID=%d",id);

        printf("\n ENTER EMPLOYE Name:");
        scanf("%s",&name);
        fprintf(fp,"NAME=%s",name);

        printf("\n ENTER EMPLOYEE SALARY:");
        scanf("%f",&salary);
        fprintf(fp,"salry=%f",salary);



    
}