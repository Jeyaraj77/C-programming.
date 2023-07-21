#include <stdio.h>
int main()
{
   int temparature;
   printf("enter  current temparature:");
   scanf("%d",&temparature);
   if(temparature>20)
     {
      printf("HOT");
     }
   else
     {
      printf("cold");
     }
   return 0;
}
