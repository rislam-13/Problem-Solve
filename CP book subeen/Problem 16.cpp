#include<iostream>
using namespace std;

int main()
{
    int n, p, row, col;
    cin>>n;

    while(n--)
    {
        cin>>p;

        for(row=0; row<p; row++)
        {
            for(col=0; col<p; col++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}
