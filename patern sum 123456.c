#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",i+j+0);
        }
        printf("\n");
    }
    return 0;
}
