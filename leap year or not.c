#include<stdio.h>
int main()
{
    int X;
    printf("Enter the year:");
    scanf("%d",&X);
    if(X%4==0)
    {
        if(X/100!=0)
        {
        printf("This is a LEAP YEAR");
        }
    }
    else if(X%400==0)
    {
        printf("This is a LEAP YEAR");
    }
    else
    {
        printf("This is not a LEAP YEAR");
    }
    return 0;
}
