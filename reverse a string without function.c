#include<stdio.h>
#include<string.h>
int main()
{
    int i,k;
    char j[30];
    printf("enter a string :");
    gets(j);
    k=strlen(j);
    printf("Reversed string is:");
    for(i=k;i>=0;i--)
    {
        printf("%c",j[i]);
    }
    return 0;
}

