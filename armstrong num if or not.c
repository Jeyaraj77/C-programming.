#include<stdio.h>
int main()
{
    int n,rem,res=0,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        res=res+(rem*rem*rem);
        n=n/10;
    }
    if(temp==res)
    {
        printf("this is a armstrong number");
    }
    else
    {
        printf("this is not a armstrong number");
    }
    return 0;

}
