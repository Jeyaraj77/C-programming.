#include<stdio.h>
int main()
{
    int n,rem=0,fact=1,temp,i,sum=0,b=0;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        int rem=0,fact=1;
        rem=temp%10;
        for(i=1;i<=rem;i++)
        {
           fact=fact*i;
        }
        temp=temp/10;
        b=b+fact;
    }
    if(b==n)
    {
        printf("it's a strong number");
    }
    else
    {
        printf("it's not a strong number");
    }
    return 0;
}
