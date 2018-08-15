#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, i, j;
    cin>>n;

    int ara[5];

    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>ara[j];
        }
        sort(ara, ara+5, greater<int>());
        cout<<ara[0]<<" "<<ara[4]<<endl;
    }

    return 0;
}
