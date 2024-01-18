

#include <stdio.h>

int main()
{
    
    float a,b;
    int chose;
    printf("enter the value of A: ");
    scanf("%f",&a);
    printf("Enter the value of B  :");
    scanf("%f",&b);
    
    printf("Enter the Choise: ");
    scanf("%d",&chose);
    
    
    
    switch(chose){
        case 1: 
            printf("Addition: %f",a+b);
            break;
        
        case 2:
            printf("Substraction: %f ",a-b);
            break;
            
        case 3:
            printf("Multiplication: %f ",a*b);
            break;
            
        case 4:
            printf("Division: %f",a/b);
            break;
            
        default:("Invalid value: ");
        
    }
    return 0;
}
