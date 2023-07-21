#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,word;
    printf("enter strings:");
    gets(str);
    i=0;
    word=1;
    while(str[i]!='\0')
    {
        if((str[i]==' ')||(str[i]=='\n')||(str[i]=='\t'))
        {
            word++;
        }
    }
    printf("total words:%d",word);
    return 0;
}
