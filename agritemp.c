#include<stdio.h>
int main()
{

    int con=25,T=10;
    float temp;
    while(T--)
    {
    printf("enter a current temp:");
    scanf("%f",&temp);
    if(temp>=con)
    {
        printf("water is needed\n");
    }
    else if((temp>=24.0)&&(temp<=24.9))
    {
        printf("ALERT\n");
    }
    else
    {
        printf("WATER is not needed\n");
    }
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    int con =30;
    float mois;
    printf("enter a current moisture level:");
    scanf("%d",&mois);
    if(mois>con)
    {
        printf("water is needed");
    }
    else
    {
        printf("water is not needed");
    }
    return 0;
}*/
