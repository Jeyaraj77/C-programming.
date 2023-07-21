//check the given number is odd or even
#include<stdio.h>
int main()
{
   int a;
   printf("enter a number:");
   scanf("%d",&a);
   if(a%2==0)
   {
       printf("Given number is EVEN");
   }
   if(a%2!=0)
   {
       printf("Given number is ODD");
   }
   return 0;
}
