#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, i, length;
    cin>>n;

    string s;

    while(n--)
    {
        cin>>s;
        length=s.length();

        for(i=0; i<length; i++)
        {
            if(s[i]=='L')
                cout<<s[i-1];
            else if(s[i]=='R')
                cout<<s[i+1];
            else
                cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
