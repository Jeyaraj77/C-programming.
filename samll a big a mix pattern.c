#include<stdio.h>
int main()
{
    int i,j,n;
    //char a[20]={"aBc"};
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i%2==0)
            {
                printf("%c",i+64);
            }
            else
            {
                printf("%c",i+96);
            }
        }
        printf("\n");
    }
    return 0;
}
