//Arithmetic operation on void pointers
#include<stdio.h>   
int main()   
{   
   float a[4]={6.1,2.3,7.8,9.0};  
   void *ptr;  
   ptr=a;  
   for(int i=0;i<4;i++)  
  {  
      printf("%f,",*((float*)ptr+i));  
   }}  

   /*OUTPUT:
   .100000,2.300000,7.800000,9.000000,*/