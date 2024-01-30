#include <stdio.h>
int main(){
    int a, i;
    int Even_Count = 0, Odd_Count=0;
    
    printf("enter the value :");
    scanf("%d",&a);
    
    for(i = 1; i<=a; i++)
    {
        if(i%2==0)
        {
              printf(" even           :%d\n\n",i);
              Even_Count++;
        }
        
        else
        {
              printf(" odd          :%d           ",i);
               Odd_Count++;
        }
      
    }
    printf("\n");
     printf("odd count is: %d             ",Odd_Count); 
     
    printf("even count is: %d     ",  Even_Count);
     
    
}
