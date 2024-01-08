#include <stdio.h>

int main()
{
    int a;
    printf("enter   any number: ");
        scanf("%d",&a);
        
        if(a>0){
            printf("number is positive: ");
        }
        else if(a<0){
            printf("number is negative: ");
        }
        else if(a==0){
            printf("number is neigher positive nor negative: ");
        }
    return 0;
}
