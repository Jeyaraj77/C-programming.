#include<stdio.h>
int reverse(int n)
{
    int rev=0,rem=0;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    return rev;
}
int main()
{
    int T;
    printf("enter the testcase:");
    scanf("%d",&T);
    while(T--)
    {
         int A,B;
         printf("Enter a A value:");
         scanf("%d",&A);
         printf("Enter a B value:");
         scanf("%d",&B);
         printf("The reversed answer is=%d\n",reverse(reverse(A)+reverse(B)));
         return 0;
    }
}
