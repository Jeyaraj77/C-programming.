#include<stdio.h>
int main()
{
    int i,n;
    int t1=0,t2=1;
    int next=t1+t2;
    printf("The numbers of the term:");
    scanf("%d",&n);
    printf("%d %d\n",t1,t2);
    for(i=3;i<=n;i++)
    {
      printf("%d\n",next);
      t1=t2;
      t2=next;
      next=t1+t2;
    }
    return 0;
}
