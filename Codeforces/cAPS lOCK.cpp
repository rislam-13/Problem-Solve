#include<iostream>
#include<string>

using namespace std;

int main()
{
    string word;
    cin>>word;

    int length=word.length(), i, j, p;

    if(word[0]>=97 && word[0]<=122)
    {
        if(length==1)
        {
            word[0]=word[0]-32;
            cout<<word<<endl;
            return 0;
        }

        p=0;

        for(i=1; i<length; i++)
        {
            if(word[i]>=65 && word[i]<=90)
            {
                p=p+1;
                if(p==length-1)
                {
                    word[0]=word[0]-32;
                    for(j=1; j<length; j++)
                        word[j]=word[j]+32;

                    cout<<word<<endl;
                    return 0;
                }
            }
        }
    }
    else
    {
        if(length==1)
        {
            word[0]=word[0]+32;
            cout<<word<<endl;
            return 0;
        }

        p=0;

        for(i=1; i<length; i++)
        {
            if(word[i]>=65 && word[i]<=90)
            {
                p=p+1;
                if(p==length-1)
                {
                    for(j=0; j<length; j++)
                        word[j]=word[j]+32;

                    cout<<word<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<word<<endl;

    return 0;
}
