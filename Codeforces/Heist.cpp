#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, i, p, x;
    cin>>n;
    int ara[n];

    for(i=0; i<n; i++)
        cin>>ara[i];

    p=sizeof(ara)/sizeof(ara[0]);

    sort(ara, ara+p);

    x=ara[n-1]-ara[0]+1;

    cout<<x-n<<endl;

    return 0;
}
