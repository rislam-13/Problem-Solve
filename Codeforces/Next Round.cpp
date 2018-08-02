#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int i, p, x=0;
    int ara[n-1];

    for(i=0; i<n; i++)
    {
        cin>>p;
        ara[i]=p;
    }

    for(i=0; i<n; i++)
    {
        if(ara[i]>0 && ara[i]>=ara[k-1])
        {
            x++;
        }
    }

    cout<<x<<"\n";

    return 0;
}
