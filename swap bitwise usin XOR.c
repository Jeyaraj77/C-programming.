#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a two number:");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\t %d\t",a,b);
    return 0;
}
