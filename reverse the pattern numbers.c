#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i-j);
        }
        printf("\n");
    }
    return 0;
}
