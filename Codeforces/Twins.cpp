#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, sum=0, p=0, coin=0;
    cin>>n;

    int ara[n];

    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }

    sort(ara, ara+n, greater<int>());

    for(i=0; i<n; i++)
    {
        p+=ara[i];
        coin++;
        if(p>sum/2)
        {
            cout<<coin<<endl;
            return 0;
        }
    }
}
