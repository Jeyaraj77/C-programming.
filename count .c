#include<stdio.h>
int reverse(int n)
{
    int rev=0,rem;
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
    printf("Enter the testcase:");
    scanf("%d",&T);
    while(T--)
    {
        int A,B;
        printf("Enter A value:");
        scanf("%d",&A);
        printf("Enter B value:");
        scanf("%d",&B);
        printf("The reversed answer is= %d\n",reverse(reverse(A)+reverse(B)));
    }
    return 0;
}
