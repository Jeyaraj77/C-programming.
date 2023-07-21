#include<stdio.h>
int main()
{
    int n,rem,res=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        res=res+rem;
        n=n/10;
    }
    printf("result:%d",res);
    return 0;
}
