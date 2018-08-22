#include<iostream>
using namespace std;

int is_prime(int p)
{
    int i;

    if(p<2)
        return 0;
    else if(p==2)
        return 1;
    else if(p%2==0)
        return 0;
    else
    {
        for(i=3; i<=p/2; i=i+2)
        {
            if(p%i==0)
                return 0;
        }
        return 1;
    }
}

int main()
{
    int n, i, x, p, a;
    cin>>n;

    while(n--)
    {
        x=0;
        for(i=0; i<10; i++)
        {
            cin>>p;
            a=is_prime(p);

            if(a==1)
                x++;
        }
        cout<<x<<endl;
    }

    return 0;
}
