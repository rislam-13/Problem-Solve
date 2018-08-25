#include<iostream>
using namespace std;

int leap_year(int year)
{
    if(year%400==0)
        return 1;
    else if(year%100==0)
        return 0;
    else if(year%4==0)
        return 1;
    else
        return 0;
}

int main()
{
    int n, i, ara1[10], ara2[10];

    int a_month[]= {31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30, 30};

    for(i=0; i<3; i++)
    {
        cin>>ara1[i];
    }
    int year1=ara1[0];

    int a, b, w=0, x;

    for(i=1; i<=ara1[0]-1; i++)
    {
        a=leap_year(i);
        if(a==1)
            w=w+366;
        else
            w=w+365;
    }

    a=leap_year(year1);
    if(a==1)
        a_month[10]=31;

    for(i=0; i<ara1[1]-1; i++)
    {
        w=w+a_month[i];
    }
    a_month[10]=30;

    for(i=1; i<=ara1[2]; i++)
        w=w+1;

    cin>>n;

    while(n--)
    {
        x=0;
        for(i=0; i<3; i++)
        {
            cin>>ara2[i];
        }
        int year2=ara2[0];

        for(i=1; i<=ara2[0]-1; i++)
        {
            a=leap_year(i);
            if(a==1)
                x=x+366;
            else
                x=x+365;
        }

        a=leap_year(year2);
        if(a==1)
            a_month[10]=31;

        for(i=0; i<ara2[1]-1; i++)
        {
            x=x+a_month[i];
        }
        a_month[10]=30;

        for(i=1; i<=ara2[2]; i++)
            x=x+1;

        cout<<w-x<<endl;
    }

    return 0;
}
