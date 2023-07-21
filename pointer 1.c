/*#include<stdio.h>
int main()
{
    int i=10;
    int *p,*q;
    p=&i;
    q=p;
    printf("%d %d",*p,*q);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int i=10,j=20;
    int *p,*q;
    p=&i;
    q=&j;
    printf("%d %d",*p,*q);
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int i=1;
    int *q,*p=&i;
    q=p;
    *q=5;
    printf("%d",*p);
    return 0;
}*/


#include<stdio.h>
int main()
{
    int i=8, *ptr=&i;;
    *ptr=4;
    printf("%d",i);
    return 0;
}
