#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i, j, p, x, y, z=0;
    int ara[2];

    for(p=0; p<n; p++)
    {
        for(i=0; i<3; i++)
        {
            cin>>y;
            ara[i]=y;
        }

        for(j=0, x=0; j<3; j++)
        {
            if(ara[j]==1)
            {
                x++;
            }
        }

        if(x>=2)
        {
            z++;
        }
    }

    cout<<z<<"\n";

    return 0;
}
