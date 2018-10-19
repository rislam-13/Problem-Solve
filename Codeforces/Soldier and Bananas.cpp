#include <iostream>

using namespace std;

int main()
{
    int n, k, w, i, sum=0;
    cin>>k>>n>>w;

    for(i=1; i<=w; i++)
        sum+=i*k;

    if(n>=sum)
        cout<<0<<endl;
    else
        cout<<sum-n<<endl;

    return 0;
}
