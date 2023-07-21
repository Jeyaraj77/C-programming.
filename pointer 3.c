/*#include<stdio.h>
int main()
{
    int a[]={1,2,3,4};
    int b[]={10,20,30,40};
    int *p,*q;
    p=&a[0];
    q=&b[3];
    printf("%d\n",*q-*p);
    printf("%x\n",p-q);
    return 0;
}*/

#include<stdio.h>
void minmax(int arr[],int len,int *min,int *max)
{
    *max=*min=arr[0];
    int i;
    for(i=1;i<len;i++)
    {
        if(arr[i]>*max)
        {
            *max=arr[i];
        }
        if(arr[i]<*min)
        {
            *min=arr[i];
        }
    }
}
int main()
{
    int a[]={10,45,67,23,2,5};
    int len=sizeof(a)/sizeof(a[0]);
    int min,max;
    minmax(a,len,&min,&max);
    printf("max value=%d and min value=%d",max,min);
    return 0;
}
