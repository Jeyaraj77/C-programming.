#include<stdio.h>
#include<string.h>
int main()
{
    int i,count1=0,count2=0;
    char s[100];
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("vowels:%d\n",count1);
    printf("constant:%d\n",count2);
    return 0;
}
