#include <bits/stdc++.h>

using namespace std;

int maximum(int r1, int r2, int r3, int r4)
{
    int maxim=r1;

    if(r2>maxim)
        maxim=r2;
    if(r3>maxim)
        maxim=r3;
    if(r4>maxim)
        maxim=r4;

    return maxim;
}

int main()
{
    int a, b, c, r1, r2, r3, r4;
    cin>>a>>b>>c;

    r1=a*b*c;
    r2=a+b+c;
    r3=(a+b)*c;
    r4=a*(b+c);

    cout<<maximum(r1, r2, r3, r4)<<endl;

    return 0;
}
