#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cin>>str;

    string str0="0000000";
    string str1="1111111";

    int i, x=0, y=0;
    int length=str.size();

    for(i=0; i<length; i++)
    {
        if(str[i]=='0')
        {
            y=0;
            x++;
            if(x>=7)
            {
                cout<<"YES"<<"\n";
                break;
            }
        }
        else
        {
            x=0;
            y++;
            if(y>=7)
            {
                cout<<"YES"<<"\n";
                break;
            }
        }
    }

    if(x<7 && y<7)
        cout<<"NO"<<"\n";

    return 0;
}
