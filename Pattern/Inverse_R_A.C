 /*   
           *****
           ****                INVERSE RIGHT ANGLE  TRANGLE
           ***
           **
           *
    
     */
           


#include <stdio.h>
 int main(){
     int n;
      printf("enter the number:");
      scanf("%d",&n);
      
      for(int i=5; i>=1; i--){
          for(int j=1; j<=i; j++){
              printf("*");
          }
            printf("\n");
      }
    return 0;
 }
