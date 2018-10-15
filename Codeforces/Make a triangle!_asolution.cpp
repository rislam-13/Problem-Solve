#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, i, ara[3];

    for(i=0; i<3; i++)
        cin>>ara[i];

    sort(ara, ara+3);

    if(ara[0]+ara[1]>ara[2])
        cout<<0<<endl;
    else
        cout<<ara[2]-ara[1]-ara[0]+1;

    return 0;
}
