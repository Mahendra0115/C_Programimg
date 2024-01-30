#include<stdio.h>
int main(){
    
    char  alpha;
    
    printf("entr the character: ");
    scanf("%c", & alpha);
    
    // printf("entr the character: ");
    // scanf("%d",&num);
    
    if (alpha =='a' || alpha == 'e'||alpha =='i'||alpha=='o'||alpha=='u'){
        printf("this is VOWEL ");
    }else{
        printf("this is  CONSTANT ");
    }
}


