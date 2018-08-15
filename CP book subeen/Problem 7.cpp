#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, i, p, y;
    double x;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>p;
        x=sqrt(p);
        y=x;

        if(y==x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
