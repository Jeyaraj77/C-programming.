#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter the rows elements:");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;

}
