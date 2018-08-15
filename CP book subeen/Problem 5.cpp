#include<iostream>
using namespace std;

int main()
{
    int n, i, j, sum;
    char ara[3];
    cin>>n;

    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=0; j<3; j++)
        {
            cin>>ara[j];
            sum=sum+ara[j];
        }
        cout<<sum<<endl;
    }

    return 0;
}
