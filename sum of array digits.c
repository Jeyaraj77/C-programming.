#include<stdio.h>
int main()
{
    int a[10],i,n,sum=0;
    printf("enter a value of N:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
