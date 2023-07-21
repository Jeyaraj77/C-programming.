#include<stdio.h>
int main()
{
  int i,sum=0,sub=0;
  int array[]={9,7};
  for(i=0;i<2;i++)
  {
   sum=sum+array[i];
   sub=sub-array[i];
  }
   printf("%d \n %d \n ",sum,sub);
   if(sum==sub)
   {
    printf("equal");
   }
   else
   {
    printf("not equal");
   }
  return 0;
}
