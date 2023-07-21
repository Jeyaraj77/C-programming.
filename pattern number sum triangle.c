#include<stdio.h>
int main()
{
    int i,j,n,res=64;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            res++;
            printf("%c\t",res);

        }
        printf("\n");
    }
    return 0;
}
