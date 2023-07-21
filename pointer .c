#include<stdio.h>
int main()
{
    int i=10;
    int *p;
    p=&i;
    printf("%p\n",p);
    printf("%d\n",*p);
    printf("%d\n",i);
    return 0;
}
