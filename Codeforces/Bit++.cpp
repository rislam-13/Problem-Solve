#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  int n, i, x=0;
  char word[5];
  cin>>n;
  for(i=0; i<n; i++)
  {
    cin>>word;

    if(strcmp(word, "X++")==0 || strcmp(word, "++X")==0)
    {
      x=x+1;
    }

    else if(strcmp(word, "X--")==0 || strcmp(word, "--X")==0)
    {
      x=x-1;
    }
  }

  cout<<x<<"\n";

  return 0;
}
