#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int i, length=s.length(), a=0, b=0, c=0, d=0;

    for(i=0; i<length; i++)
    {
        if(s[i]=='h')
        {
            a=a+1;
            i=i+1;
            break;
        }
    }
    for( ; i<length; i++)
    {
        if(s[i]=='e')
        {
            b=b+1;
            i=i+1;
            break;
        }
    }
    for( ; i<length; i++)
    {
        if(s[i]=='l')
        {
            c=c+1;
            if(c>=2)
            {
                i=i+1;
                break;
            }
        }
    }
    for( ; i<length; i++)
    {
        if(s[i]=='o')
        {
            d=d+1;
            break;
        }
    }

    if(a>0 && b>0 && c>=2 && d>0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
