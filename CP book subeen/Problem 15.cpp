#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;

    while(n--)
    {
        cin>>s;

        int length=s.length();
        int p=s[length-1];

        if(p%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }

    return 0;
}
