#include<iostream>
using namespace std;

int main()
{
    int n, i, p, ara[1000];
    cin>>n;

    char ch;

    for(i=0; i<n; i++)
    {
        p=0;
        while(scanf("%d%c", &ara[p], &ch)) //C
        {
            p++;
            if(ch=='\n')
                break;
        }
        cout<<p<<endl;
    }

    return 0;
}
