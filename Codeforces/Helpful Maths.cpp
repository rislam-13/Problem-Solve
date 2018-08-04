#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    string s1, s2[100];
    cin>>s1;

    sort(s1.begin(), s1.end());

    int i, j=0;
    int length=s1.length();

    for(i=0; i<length; i++)
    {
        if(s1[i]!='+')
        {
            s2[j]=s1[i];
            j++;
        }
    }

    cout<<s2[0];
    for(i=1; i<length; i++)
    {
        if(s2[i]=="\0")
        {
            break;
        }
        cout<<"+"<<s2[i];
    }
    cout<<"\n";

    return 0;
}
