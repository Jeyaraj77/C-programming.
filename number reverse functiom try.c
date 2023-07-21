#include<stdio.h>
int main ()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    a=a%=0;
    printf("%d",a);
    return 0;
}
