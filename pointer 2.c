/*#include<stdio.h>
int main()
{
    int i=10;
    void *p=&i;
    printf("%d",*(int*)p);
    return 0;
}*/

#include<stdio.h>
int main()
{
    int i=30;
    void *ptr=&i;
    printf("%d",*(int*)ptr);
    return 0;
}
