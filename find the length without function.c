#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0;
    char r[30];
    printf("enter a string:");
    gets(r);
    for(i=0;r[i]!='\0';i++)
    {
        j++;
    }
    printf("The count of the string is:%d",j);
    return 0;
}
