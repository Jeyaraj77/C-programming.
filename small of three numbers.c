#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter the element a:");
   scanf("%d",&a);
   printf("enter the element b:");
   scanf("%d",&b);
   printf("enter the element c:");
   scanf("%d",&c);
   if((a<=b) && (a<=c))
   {
       printf("a is smaller\n");
   }
   if((b<=a) && (b<=c))
   {
       printf("b is smaller\n");
   }
   if((c<=a) && (c<=b))
   {
       printf("c is smaller\n");
   }
   return 0;
}
