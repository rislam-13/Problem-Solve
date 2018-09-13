#include<iostream>
using namespace std;

int main()
{
    int n, r, a, b, p;
    cin>>n;

    while(n--)
    {
        cin>>r>>a>>b;

        if(a<b)
            p=a;
        else
            p=b;

        if(2*r<=p)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
