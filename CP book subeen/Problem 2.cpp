#include<iostream>
using namespace std;

int main()
{
    int n, i, num, pos=0, neg=0;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>num;
        if(num>0)
            pos++;
        else
            neg++;
    }

    cout<<pos<<" "<<neg<<endl;

    return 0;
}
