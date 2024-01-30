#include<studio.h>
int main(){
    
    char  ch;
    
    printf("entr the character: ");
    scanf("%c", &ch);
    
    // printf("entr the character: ");
    // scanf("%d",&num);
    
    if (ch>='a' && ch<='z')
    {
        printf("this is alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("this is number");
    }
    else
    {
        printf("this is special chr  ");
    }
}


