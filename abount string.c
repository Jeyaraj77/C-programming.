#include<stdio.h>
#include<string.h>
int main()
{
    char country[30],mal[30],n,m;
    gets(country);
    puts(country);
    gets(mal);
    int M;
    printf("%d\n",M);
    strcpy(mal,country);
    printf("%s\n",mal);
    M=strcmp(country,mal);
    printf("%d\n",M);
    if(country>mal)
        printf("1\n");
    else if(mal>country)
        printf("-1\n");
    else
        printf("0\n");
    return 0;
}
