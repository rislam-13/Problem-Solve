#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, i, j, p;
    cin>>n;

    double x, sum;

    for(i=0; i<n; i++)
    {
        sum=0;
        cin>>x;

        for(j=0; j<x; j++)
        {
            cin>>p;
            sum=sum+p;
        }
        cout<<fixed<<setprecision(2)<<sum/x<<endl;
    }

    return 0;
}
