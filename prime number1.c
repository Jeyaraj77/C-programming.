#include<stdio.h>
using namespace std;
int main()
{
    int n,i,m=0,flag=0;
    cout<<"enter the number to check prime:";
    cin>>n;
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(n%!==0)
        {
            cout<<"number is not prime"<<endi;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"number is prime"<<endi;
    }
    return 0;
}
