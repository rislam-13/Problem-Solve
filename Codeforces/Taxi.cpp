#include<iostream>
using namespace std;

int main()
{
    int n, i, a=0, b=0, c=0, d=0, p=0, q1=0, q2=0, r=0, s=0, t=0;
    cin>>n;
    int ara[n];

    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    for(i=0; i<n; i++)
    {
        if(ara[i]==1)
            a=a+1;
        else if(ara[i]==2)
            b=b+1;
        else if(ara[i]==3)
            c=c+1;
        else
            d=d+1;
    }

    for( ; c>0 && a>0; )
    {
        p=p+1;
        c--, a--;
    }

    for( ; b>0 && a>=2; )
    {
        r=r+1;
        b--, a=a-2;
    }

    if(b>0 && b%2==0)
    {
        q1=b/2;
    }
    else if((b%2)!=0)
    {
        q2=(b/2)+1;
    }

    for( ; a>=4; )
    {
        s=s+1;
        a=a-4;
    }

    for( ; a>0 && q2>0; )
    {
        t=t+1;
        a--, q2--;
    }

    for( ; a>=1 && a<=3; )
    {
        a=1;
        break;
    }

    cout<<p+q1+q2+r+s+a+c+d+t<<endl;

    return 0;
}
