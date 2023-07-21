#include<stdio.h>
int main()
{
    int n,rem,reverse=0,result;
    printf("enter a number:");
    scanf("%d",&n);
    result=n;
    while(n!=0)
    {
        rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;
    }
    if(result==reverse)
    {
        printf("given number is a palindrome");
    }
    else
    {
        printf("given number is not a palindrome");
    }
    return 0;

}
