#include<stdio.h>
int main()
{
    int i,j,m;
    printf("enter the row:");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%c",i+97);
        }
        printf("\n");
    }
    return 0;
}
