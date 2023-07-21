#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test>0)
    {
        int a,b;
        int res;
        scanf("%d %d",&a,&b);
        res=a+b;
        printf("%d\n",res);
        test--;
    }
    return 0;
}
