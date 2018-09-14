#include<iostream>

using namespace std;

int main()
{
    int n, i, sum=0;
    cin>>n;

    if(n==0)
        sum=1;
    else if(n>0)
    {
        for(i=1; i<=n; i++)
            sum=sum+(i);
    }
    else
    {
        for(i=1; i>=n; i--)
            sum=sum+(i);
    }

    cout<<sum<<endl;

    return 0;
}
