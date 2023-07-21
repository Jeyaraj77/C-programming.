#include<stdio.h>
int main()
{
    int a[2][2],i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
