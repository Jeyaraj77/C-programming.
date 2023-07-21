#include<stdio.h>
int main()
{
    int n,i,sum=0,m,k,l,b=1,c;
    printf("enter arr size value:");
    scanf("%d",&n);
    int a[n];
    printf("enter arr ele:");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter sum ele:");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        if(sum<m)
        {
            sum=sum+a[i];
            if(sum==m)
                c=i;
        }
        if(sum>m)
        {
            sum=sum-a[b];
            b++;
            if(sum==m)
                c=i;
        }
        if(sum==m)
        {
            k=b;
            l=c;
        }
    }
    printf("%d\n",k);
    printf("%d",l);
    return 0;
}
