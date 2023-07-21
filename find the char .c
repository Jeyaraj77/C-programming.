#include<stdio.h>
int main()
{
    char c;
    printf("enter a element:");
    scanf("%c",&c);
    if(c>='a' && c<='z')
    {
        printf("alphapet");
    }
    else if(c>='0' && c<='9')
    {
        printf("numeric digit");
    }
    else
    {
        printf("special character");
    }
    return 0;
}
