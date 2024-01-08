#include <stdio.h>

int main()
{
    char name[10], d_name [10];
    int m1 ,m2,m3;
     float avg ;
    
    printf("Enter the student name: ");
    scanf("%s",&name);
    printf("enter the department name: ");
    scanf("%s",&d_name);
    
    printf("enter the student maks: ");
    scanf("%d%d%d",&m1,&m2,&m3);
    
    
   
    float avg =  (m1+m2+m3)/3;
   
      printf(" student's maks Avrage is: %f\n",avg);
      
      if(avg > 90){
          printf(" frist devision");
      }
      else if(avg> 80){
          printf("second devesion");
      }
      else if(avg> 60){
          printf("thied devesion");
      }
      else{
          printf("fail");
      }
    
    return 0;
}

