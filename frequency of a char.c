#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char j[100],choice;
    printf("enter a word:");
    gets(j);//hara hara
    printf("enter a letter:");
    scanf("%c",&choice);//a
    for(i=0;j[i]!='\0';i++)
    {
        if(choice==j[i])
        {
            c++;
        }
    }
    printf("Freqyency of %c is %d\n",choice,c);
    return 0;
}
