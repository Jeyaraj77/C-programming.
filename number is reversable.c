#include<stdio.h>
int main()
{
    int n,reverse=0,rem;
    printf("enter a number:");
    scanf("%d",&n);
      while(n!=0)
      {
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10;
      }
    printf("Reverse number:%d",reverse);
    return 0;
}
