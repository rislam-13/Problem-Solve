#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll a, b, x, y;
    cin>>a>>b>>x>>y;

    ll gcd=__gcd(x, y);

    x=x/gcd, y=y/gcd;

    cout<<min(a/x, b/y)<<endl;

    return 0;
}
