#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, s, coins=0, p;
  cin>>n>>s;

  while(1)
  {
    p=s/n;
    coins+=p;

    s-=p*n;
    if(s==0)
    {
      cout<<coins<<endl;
      return 0;
    }
    n--;
  }

}
