#include<iostream>
using namespace std;

int main()
{
    int n, i, cnt=0;
    cin>>n;

    string s;
    cin>>s;

    for(i=0; i<n; i++)
    {
        if(s[i]!=s[i+1])
        {
            cnt=cnt+0;
        }
        else
        {
            cnt=cnt+1;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
