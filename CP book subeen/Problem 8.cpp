#include<iostream>
using namespace std;

int main()
{
    int n, i, j, sum, p;
    cin>>n;

    for(i=0; i<n; i++)
    {
        sum=0;
        for(j=0; j<5; j++)
        {
            cin>>p;
            sum=sum+p;
        }
        cout<<sum/5<<endl;
    }

    return 0;
}
