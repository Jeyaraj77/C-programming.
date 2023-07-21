#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char j[30];
    printf("enter a string :");
    gets(j);
    n=strlen(j);
    printf("Reversed string is:");
    for(i=n;i>=0;i--)
    {
        printf("%c",j[i]);
    }
    return 0;
}

