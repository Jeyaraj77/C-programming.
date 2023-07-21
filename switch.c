#include<stdio.h>
int main()
{
    int token;
    scanf("%d",&token);
    switch(token)
    {
        case 1:printf("milk");
              break;
        case 2:printf("egg");
              break;
        case 3:printf("chicken");
              break;
        case 4:printf("choclate");
              break;
        default:printf("other things");
              break;
    }
    return 0;
}
