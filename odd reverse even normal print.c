#include<stdio.h>
int main()
{
    int i,j;
    int a[]={1,2,3,4,5};
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d",a[i]);
        }
        if(a[j]%2!=0)
        {
            printf("%d",a[j]);
        }
    }
    return 0;
}
