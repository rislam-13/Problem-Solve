#include<iostream>
using namespace std;

int main()
{
  unsigned long long n, m, a;
  cin>>n>>m>>a;

  unsigned long long o,p,q,r,s;
  double long x,y,z;

  x=double(n)/double(a);
  o=x;

  if(x>o)
  {
    p=o+1;
  }
  else
  {
    p=o;
  }

  if(m<=a)
  {
    cout<<p<<"\n";
    return 0;
  }
  else
  {
    s=m-a;
    y=double(s)/double(a);
    r=y;

    if(y>r)
    {
      q=(r+1)*p;
    }
    else
    {
      q=r*p;
    }
  }

  cout<<p+q<<"\n";

  return 0;
}
