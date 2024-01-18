#include <stdio.h>
int main(){
    int r,s;
    long n;
    s=0;
     int  count =0;
    printf("enter the  n:");
    scanf("%ld",&n);
    
    while(n!= 0){

         r =n%10;
         s=s+r;    /*----------------- this is spasiol line */ 
         n=n/10;
            count=count+1;
        
    }
    printf("Total number of count is : %d",count);
    
}











