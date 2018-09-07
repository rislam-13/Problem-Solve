#include<iostream>
using namespace std;

int main()
{
    int n, num;

    cin>>n;

    while(n--)
    {
        cin>>num;

        if(num<10)
            cout<<1<<endl;
        else if(num<100)
            cout<<2<<endl;
        else if(num<1000)
            cout<<3<<endl;
        else if(num<10000)
            cout<<4<<endl;
        else if(num<100000)
            cout<<5<<endl;
        else if(num<1000000)
            cout<<6<<endl;
        else if(num<10000000)
            cout<<7<<endl;
        else
            cout<<8<<endl;
    }

    return 0;
}
