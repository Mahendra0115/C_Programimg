 // find greater  in three value 

#include <stdio.h>

int main()
{
     int a,b,c;
     
     printf("enter the value of a: ");
     scanf("%d", &a);
     printf("enter the value of b :");
     scanf("%d",&b);
     printf("enter the value of c :");
     scanf("%d",&c);
     
     if(a>=b && b>=c){
        
        printf("A is greater:");
     }else if(b>=a && b>=c){
         printf(" B is greater: ");
         
     }else if(c >= a && c >= b){
         printf(" C is grater: ");
     }
    else{
        printf("invalid value : ");
    }
}
