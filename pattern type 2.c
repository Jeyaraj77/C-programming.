#include<stdio.h>
int main()
{
    int i,j,k,m;
    printf("enter a number:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=j;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
