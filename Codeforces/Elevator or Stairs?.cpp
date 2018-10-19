#include <iostream>

using namespace std;

int main()
{
    int x, y, z, t1, t2, t3, stair, elevator;
    cin>>x>>y>>z>>t1>>t2>>t3;

    stair=abs(x-y)*t1;

    elevator=abs(x-z)*t2+t3+t3+abs(x-y)*t2+t3;

    if(elevator<=stair)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
