#include <stdio.h>

int main()
{
    int a, b,c;
    
    printf("enter the value of a: ");
    scanf("%d",&a);
    printf("enter the value of b: ");
    scanf("%d",&b);
     printf("enter the value of b: ");
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("a is greater ");
    }else if(b>c && b>a){
        printf(" b is greater");
    } else if(c>a && c>b){
        printf(" c is greater");
    }else
    {
        printf("value is 0");
    }



