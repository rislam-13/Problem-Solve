#include<iostream>
using namespace std;

int main()
{
    int n, a, b, p, temp;
    cin>>n;

    cin>>a>>b;
    temp=b;
    p=b;
    n=n-1;

    while(n--)
    {
        cin>>a>>b;
        p=p-a+b;

        if(p>temp)
            temp=p;
    }
    cout<<temp<<endl;

    return 0;
}
