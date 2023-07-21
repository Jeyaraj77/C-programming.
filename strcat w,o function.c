#include<stdio.h>
#include<string.h>
int main()
{
    char str1[25],str2[25];
    int i=0,j=0;
    printf("enter the first string:");
    gets(str1);
    printf(" enter the second string:");
    gets(str2);
    while(str1[i]!='\0')
    i++;
    while(str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("\nconcodinate string is:%s",str1);
}
