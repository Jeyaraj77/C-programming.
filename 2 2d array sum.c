#include<stdio.h>
int main()
{
    int i,j;
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int sum;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum=a[i][j]+b[i][j];
            printf("%d\t",sum);
        }
        printf("\n");

    }
    return 0;
}
