//CALL BY REFRENCE
#include<stdio.h>  
void change(int *num) {    
    printf("Before adding value inside function num=%d \n",*num);    
    (*num) += 100;    
    printf("After adding value inside function num=%d \n", *num);    
}      
int main() {    
    int x=100;    
    printf("Before function call x=%d \n", x);    
    change(&x);//passing reference in function    
    printf("After function call x=%d \n", x);    
return 0;  
}    

/*output:
Before function call x=100 
Before adding value inside function num=100 
After adding value inside function num=200
After function call x=200*/