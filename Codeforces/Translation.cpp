#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word1, word2;
    cin>>word1>>word2;

    int i, j, p=word1.length(), q=word2.length();

    for(i=0, j=q-1; i<p; i++, j--)
    {
        if(word1[i]!=word2[j])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
