#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t, a, i, cnt;
    cin>>t;

    for(i=0; i<t; i++)
    {
        cin>>a;

        cnt=pow(2, __builtin_popcount(a));

        cout<<cnt<<endl;
    }

    return 0;
}
