#include<stdio.h>
int main()
{
    int arr[10],i,n;
    printf("enter a value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;

}
