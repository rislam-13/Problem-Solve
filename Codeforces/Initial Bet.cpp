#include<iostream>
using namespace std;

int main()
{
    int c1, c2, c3, c4, c5;
    cin>>c1>>c2>>c3>>c4>>c5;

    int sum=c1+c2+c3+c4+c5;
    int p=sum/5;

    if(sum>=5 && sum%5==0)
        cout<<p<<endl;
    else
        cout<<-1<<endl;

    return 0;
}
