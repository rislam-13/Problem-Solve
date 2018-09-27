#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%4==0 || n%7==0 || n%47==0 || n%74==0)
            cout<<"YES"<<endl;
    else
    {
        int cnt=0;

        stringstream ss;
        ss<<n;
        string str = ss.str();

        int length=str.length();

        for(int i=0; i<length; i++)
        {
            if(str[i]=='4' || str[i]=='7')
            {
                cnt=cnt+1;
                if(cnt==length)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        cout<<"NO"<<endl;
    }

    return 0;
}
