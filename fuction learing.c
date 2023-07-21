#include<stdio.h>
int add(int,int)
int main()
{
    int a,b,res,res1,res2,res3;
    scanf("%d %d"&a,&b);
    res=add(a,b);
    printf("%d",res);
    res1=sub(a,b);
    printf("%d",res1);
    res2=mul(a,b);
    printf("%d",res2);
    res3=div(a,b);
    printf("%d",res3);
 int add(int a,int b)
 {
    int sum;
    sum=a+b;
    return sum;
 }
 int sub(int a,int b)
 {
    int sub;
    sub=a-b;
    return sub;
 }
 int mul(int a,int b)
 {
    int mul;
    mul=a*b;
    return mul;
 }
int div(int a,int b)
 {
    int div;
    div=a/b;
    return div;
 }
 return 0;
}
