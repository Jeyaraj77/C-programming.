#include<stdio.h>
int main()
{
    int m,n;
    printf("enter a value of m:");
    scanf("%d",&m);
    if(m>0)
    {
        printf("1");
    }
    else if(m==0)
    {
        printf("0");
    }
    else
    {
        printf("-1");
    }
    return 0;
}
