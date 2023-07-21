#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int x,y,n,c,d,j,k,rx,tx,mt;
        scanf("%d %d",&x,&y);
        rx=y-x;
        scanf("%d",&n);
        scanf("%d %d",&c,&d);
        scanf("%d %d",&j,&k);
        tx=n*d*k;
        mt=n*c*j;
        if((tx<=mt)&&(tx<=rx))
        {
            printf("the minimum amoumt of biggy bank is :%d",tx);
        }
        else if((mt<=tx)||(mt<=rx))
        {
            printf("the amount of biggy bank id:%d",mt);
        }
        else
        {
            printf(" it is impossible");
        }
    }
    return 0;
}
