#include<stdio.h>
#include<string.h>
int main()
{
    char vj[100];
    int freq[256]={0};
    int i;
    printf("enter a string:");
    gets(vj);
    for(i=0;vj[i]!='\0';i++)
    {
        freq[vj[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(freq[i]!=0)
        {
            printf("%c occurs %d\n",i, freq[i]);
        }
    }
    return 0;

}
