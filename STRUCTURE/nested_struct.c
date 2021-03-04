//NESTED STRUCTURE:
#include<stdio.h>  
struct address   
{  
    char city[20];  
    int pin;  
    char phone[14];  
};  
struct employee  
{  
    char name[20];  
    struct address add;  
};  
void main ()  
{  
    struct employee emp;  
    printf("Enter employee information?\n");  
    scanf("%s %s %d %s",emp.name,emp.add.city, &emp.add.pin, emp.add.phone);  
    printf("Printing the employee information....\n");  
    printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
}  

/*OUTPUT:
Enter employee information?
shruti
dhule
424307
7499549303 
Printing the employee information....
name: shruti
City: dhule
Pincode: 424307
Phone: 7499549303
*/