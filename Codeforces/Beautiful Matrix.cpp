#include<iostream>

using namespace std;

int row_adjust(int r, int cnt)
{
    if(r<3)
    {
        for(r=r+1; r<=3; r++)
            cnt=cnt+1;
    }
    else if(r>3)
    {
        for(r=r-1; r>=3; r--)
            cnt=cnt+1;
    }

    return cnt;
}

int col_adjust(int c, int cnt)
{
    if(c<3)
    {
        for(c=c+1; c<=3; c++)
            cnt=cnt+1;
    }
    else if(c>3)
    {
        for(c=c-1; c>=3; c--)
            cnt=cnt+1;
    }

    return cnt;
}

int main()
{
    int n, row, col, r, c, a, b, cnt=0;

    for(row=1; row<=5; row++)
    {
        for(col=1; col<=5; col++)
        {
            cin>>n;
            if(n==1)
                r=row, c=col;
        }
    }

    if(r==3 && c==3)
        cout<<0<<endl;
    else
    {
        a=row_adjust(r, cnt);
        b=col_adjust(c, cnt);

        cout<<a+b<<endl;
    }

    return 0;
}
