#include <iostream>

using namespace std;

int main()
{
    int n, i, j, p, x=0, y=0, z=0;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=3; j++)
        {
            cin>>p;

            if(j%3==2)
                x+=p;
            else if(j%3==1)
                y+=p;
            else
                z+=p;
        }
    }

    if(x==0 && y==0 && z==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
