#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j+0);
        }
        printf("\n");
    }
    return 0;

}
