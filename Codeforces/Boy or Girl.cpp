#include<iostream>
#include<set>

using namespace std;

int main()
{
    string s;
    cin>>s;

    set<char>checker(s.begin(), s.end());

    if(checker.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
