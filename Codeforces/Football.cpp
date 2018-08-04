#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cin>>str;

    string str0="0000000";
    string str1="1111111";

    if(str.find(str0)!=string::npos || str.find(str1)!=string::npos)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
    
/*
    if(strstr(str.c_str(),str0.c_str()) || strstr(str.c_str(),str1.c_str()))
    {
        cout<<"YES"<<"\n";
    }
    else
        cout<<"NO"<<"\n";

*/

    return 0;
}
