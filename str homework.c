#include<stdio.h>
#include<string.h>
int main()
{
    char s[45],m[45];
    printf("enter a string:");
    gets(s);
    printf("%s",strcpy(s,m));
    puts(m);
    return 0;
}
