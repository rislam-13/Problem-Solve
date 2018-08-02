#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  int n,i;
  cin>>n;

  int length, i_length;
  char word1[100];
  char word2[10];

  for(i=0; i<n; i++)
  {
    cin>>word1;

    length=strlen(word1);

    if(length<=10)
    {
      cout<<word1<<"\n";
    }
    else
    {
      i_length=length-2;

      word2[0]=word1[0];
      word2[1]=word1[length-1];

    cout<<word2[0]<<i_length<<word2[1]<<"\n";
    }
  }

  return 0;
}
