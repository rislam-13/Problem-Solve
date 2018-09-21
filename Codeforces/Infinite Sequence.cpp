#include<iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if(a==b)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else if(c==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(a>b && c>0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(a>b && c<0)
    {
        if((a-b)%c==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    else if(a<b && c>0)
    {
        if((b-a)%c==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    else if(a<b && c<0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    cout<<"NO"<<endl;

    return 0;
}
