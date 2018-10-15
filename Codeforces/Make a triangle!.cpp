#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, i, ara[3], p, mins=0, q=1;

  for(i=0; i<3; i++)
    cin>>ara[i];

  p=sizeof(ara)/sizeof(ara[0]);

  sort(ara, ara+p);

  if((ara[0]+ara[1])>ara[2])
    cout<<0<<endl;
  else
  {
    while((ara[0]+ara[1])<=ara[2])
    {
      if(q%2==1)
        ara[0]=ara[0]+1;
      else
        ara[1]=ara[1]+1;

      mins=mins+1;
      q++;
    }
    cout<<mins<<endl;
  }

  return 0;
}
