#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
    int n, p, a;
    cin>>n;

    string s;
    cin.ignore();

    while(n--)
    {
        getline(cin, s);
        stringstream ss(s);

        p=0;
        while(ss>>a)
            p++;
        cout<<p<<endl;
    }

    return 0;
}
