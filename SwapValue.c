//     swaping value using three varr 

#include<stdio.h>
void main(){
    
    int a,b,c;
    
     printf("enter the number of A : ");
    scanf("%d",&a);
    
     printf("enter the number of B : ");
    scanf("%d",&b);
     
     c=a;
     a=b;
     b=c;
     
     printf("Value of A is: %d\n",a);
     printf("Value of B is: %d",b);
    
}
